#include <stdio.h>
#include <math.h>

int chicken_calculator(float e, float f, float u, float p){
    int n;
    n = ceil(round( (p + f) / ((0.95) * u - e) * 1000.0 ) / 1000.0);
    return n;
}
int chicken_losses_calculator(int n){
    return (int)ceil(round(0.05 * n * 1000.0) /1000.0);
}

int main() {

    float fixed, expenses , unit , profit;
    int num, loss;
    printf("Enter the total fixed one time costs, f: ");
    scanf("%f",&fixed);
    printf("Enter the expenses to raise one chicken, e: ");
    scanf("%f",&expenses);
    printf("Enter the unit price charged per chicken, u: ");
    scanf("%f",&unit);
    printf("Enter the required profit, p: ");
    scanf("%f",&profit);
    num = chicken_calculator(expenses,fixed,unit,profit);
    loss = chicken_losses_calculator(num);

    printf("The number of chickens Mary bought to make %0.2f is: %d\n", profit, num);
    printf("The number of chickens Mary lost in 16 weeks is: %d\n", loss);




    return 0;
}
