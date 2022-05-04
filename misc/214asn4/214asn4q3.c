#include <stdio.h>
#include <string.h>


typedef struct{
    char name[100];
    int units_sold;
    float unit_price;
    float total_sales;

}smoothie;

smoothie bestSeller(char filename[]){
    char title[100];
    char name[100];
    int units_sold;
    float unit_price;
    float total_sales;
    smoothie best_seller;
    int i = 0;

    FILE *file = fopen(filename, "r");
    //Get rid of the title filler and store it in an array which we dont care about
    fscanf(file, "%s %s %s %s", title);
    //While not End Of File
    while(fscanf(file, "%s", name) != EOF){
        fscanf(file, "%d %f %f", &units_sold, &unit_price, &total_sales);
        //initialize the first smoothie data and store it as the current best seller
        if(i == 0){
            strcpy(best_seller.name, name);
            best_seller.units_sold = units_sold;
            best_seller.unit_price = unit_price;
            best_seller.total_sales = total_sales;
            i++;
        }
        else {
            if(best_seller.total_sales < total_sales){
                strcpy(best_seller.name, name);
                best_seller.units_sold = units_sold;
                best_seller.unit_price = unit_price;
                best_seller.total_sales = total_sales;

            }
        }

    }
    fclose(file);
    return best_seller;
}

int main(){
    smoothie best_seller = bestSeller("sales.txt");
    printf("Displaying the best seller for the last weekend: \n");
    printf("Name: %s\n", best_seller.name);
    printf("Price: %0.2f\n", best_seller.unit_price);
    printf("Number sold: %d\n", best_seller.units_sold);
    printf("Total sales: %0.2f\n", best_seller.total_sales);

    return 0;
}

