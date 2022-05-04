#include <stdio.h>

float avg(float arr[], int len){
    float avg = 0;
    for(int i = 0; i < len; i++){
        avg += arr[i];
    }
    avg = avg/len;
    printf("Average fo the life expectancy values: %0.3f \n", avg);
}

float arrMinMax(float arr[], int len){
    float min = arr[0];
    float max = arr[0];
    for(int i = 0; i < len; i++)
        if(arr[i] < min){
            min = arr[i];
        }
    for(int i = 0; i < len; i++)
        if(arr[i] > max){
            max = arr[i];
        }
    printf("Lowest life expectancy value is: %0.3f \n", min);
    printf("Highest life expectancy value is: %0.3f \n", max);
}

float insertionSort(float arr[], int len){
    int i, j;
    float temp = 0;
    for(i = 1; i < len; i++){
        temp = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] < temp){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    printf("List of sorted life expectancy values (Desc): \n");
    for(int i = 0; i < len; i++){
        printf("%0.3f \t", arr[i]);
    }
}


int main(){

    int len = 5;
    float LifeEx[] = {75.981, 82.675, 68.745, 99.425, 88.442};
    avg(LifeEx, len);
    arrMinMax(LifeEx, len);
    insertionSort(LifeEx, len);
    return 0;
}