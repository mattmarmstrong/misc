#include <stdio.h>

int main()
{
    float diameter;
    float pi = 3.14159265;

    printf("Enter the diameter of the circle: ");
    scanf("%f", &diameter);

    printf("The radius of the circle is %f\n", (diameter/2));
    printf("The area of the circle is %0.2f\n", (((diameter/2)*(diameter/2)) * pi));
    printf("The circumference is %0.2f\n", (diameter * pi));



    return 0;
}