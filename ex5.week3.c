#include <stdio.h>

int main() {
    int r1Coord, r1Step, r2Coord, r2Step;

    scanf("%d %d %d %d", &r1Coord, &r1Step, &r2Coord, &r2Step);

    if ((r1Step == r2Step) || 
        ((r1Step > 0 && r2Step > 0 && r1Coord > r2Coord) || 
         (r1Step < 0 && r2Step < 0 && r1Coord < r2Coord))) {
        printf("NEVER\n");
        return 0;
    }

    int diffCoord = r2Coord - r1Coord;
    int diffStep = r1Step - r2Step;

    if (diffStep != 0 && diffCoord % diffStep == 0 && diffCoord / diffStep >= 0) {
        int time = diffCoord / diffStep;
        int meetingCoord = r1Coord + r1Step * time;
        printf("%d %d\n", meetingCoord, time);
    } else {
        printf("NEVER\n");
    }

    return 0;
}