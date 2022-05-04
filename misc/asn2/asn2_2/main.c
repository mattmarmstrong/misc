#include <stdio.h>
#include <stdbool.h>

int is_valid_triangle(float x, float y, float z) {
    if (((x + y) > z) && ((x+z) > y) && ((y+z) > x))
        return 1;
    else
        return 0;

};
int main() {
    float x, y, z;
    printf("Enter value for side x:");
    scanf("%f", &x);
    printf("Enter value for side y:");
    scanf("%f", &y);
    printf("Enter value for side z:");
    scanf("%f", &z);

    if (is_valid_triangle(x,y,z) == 1)
        printf("This is a valid triangle");
    else
        printf("This is not a valid triangle");

    return 0;
}
