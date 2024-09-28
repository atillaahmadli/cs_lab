#include <stdio.h>

int main(){

    int width, height, length, radius;
    printf("Give me the width, height, length;\n ");
    scanf("%d %d %d", &width, &height, &length);
    printf("Give me the radius;\n");
    scanf("%d", &radius);

    int diameter = 2 * radius;

    if(diameter <= width && diameter <= length && diameter <= height){
    printf("The gift can be sent");
    }
    else{
         printf("The gift can not be sent");
    }
    return 0;
}
