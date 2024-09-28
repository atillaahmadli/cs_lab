10

#include <stdio.h>
#include <math.h>

int main() {
    double x0, y0, radius;
    printf("Enter the circle center (x0 y0) and radius: ");
    scanf("%lf %lf %lf", &x0, &y0, &radius);

    double radius_squared = radius * radius; 
    printf("Enter points (xi yi), one per line (Ctrl+D to end):\n");
    
    double xi, yi;
    while (scanf("%lf %lf", &xi, &yi) != EOF) {
        double distance_squared = (xi - x0) * (xi - x0) + (yi - y0) * (yi - y0);

        if (distance_squared == radius_squared) {
            printf("Point (%.2lf, %.2lf) is ON the circle\n", xi, yi);
        } else if (distance_squared < radius_squared) {
            printf("Point (%.2lf, %.2lf) is INSIDE the circle\n", xi, yi);
        } else {
            printf("Point (%.2lf, %.2lf) is OUTSIDE the circle\n", xi, yi);
        }
    }

    return 0;
}