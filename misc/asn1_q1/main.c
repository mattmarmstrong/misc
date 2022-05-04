#include <stdio.h>

int main()
{
    int i;
    float j;
    int k;
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a real number: ");
    scanf("%f", &j);
    printf("Enter an integer: ");
    scanf("%d", &k);

    printf("While walking home from work, a man saw a cat with %d spots. He paused to stare at the cat for approximately %f seconds. How strange, he thought. Yesterday the cat had %d spots.", i,j,k);
    return 0;
}