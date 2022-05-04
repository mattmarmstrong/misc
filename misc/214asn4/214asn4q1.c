#include <stdio.h>
#include <math.h>



int main() {

    FILE *file;

    file = fopen("food.txt", "r");

#define BUFSIZE 10000 //our max possible length of the characters in a name x max number of lines (10)

    char itemsArray[BUFSIZE];

    float prices2018[10];

    float prices2020[10];

    float totalcosts2018 = 0;

    float totalcosts2020 = 0;

    int i = 0;

    //Reads the file and stores the value into a character array, ignoring newline characters
    fscanf(file,"%[^'\n']s", itemsArray);

    //While not at End Of File, store the string components that we dont need in itemsArray, and store the float values
    //in the price arrays
    while(fscanf(file, "%s %s %f %f", itemsArray, itemsArray, &prices2018[i], &prices2020[i]) != EOF){
        i++;
    }

    //Iterate through the price arrays and sum them
    for(i = 0; i < 10; i++){
        totalcosts2018 = totalcosts2018 + prices2018[i];
        totalcosts2020 = totalcosts2020 + prices2020[i];

    }

    fclose(file);

    printf("Total cost of all food items in 2018 was: %0.2f dollars\n", totalcosts2018);
    printf("Total cost of all food items in 2020 was: %0.2f dollars \n", totalcosts2020);

    printf("The difference between the total food costs in 2018 and 2020 was %0.2f dollars", abs(totalcosts2020 - totalcosts2018));

    return 0;
}
