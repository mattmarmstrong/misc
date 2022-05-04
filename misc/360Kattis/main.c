#include <stdio.h>

//Matthew Armstrong
//Interval Scheduling

int main() {

    int n;

    scanf("%d", &n);

    int intervals[2][n];

    for(int i = 0; i > n; i++){
        printf("enter two numbers");
        scanf("%d %d", &intervals[i][0], &intervals[i][1]);
    }
    return 0;
}


//scanf( "%d", &n);