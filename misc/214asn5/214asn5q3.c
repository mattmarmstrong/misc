#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Matthew Armstrong
//11175550

#define STATION_CODE_LENGTH 4

typedef struct _station {
    char code[STATION_CODE_LENGTH];
    struct _station *next;
} Station;

typedef struct _route {
    Station *first_station;
    unsigned int num_stations;
} Route;

Route* read_stations(FILE *fp) {
    Route new_route;
    int i = 0;

    while (!feof(fp)) {

        //structure initializations
        Station first_station;
        Station new_station;

        //get next code
        fgets(new_station.code, STATION_CODE_LENGTH, fp);
        first_station.next = &new_station;

        //have to use first_station.next, because at EOF, the first_stations code will be NULL, and it will point to the new_station
        //which we will want to be our first station
        new_route.first_station = first_station.next;
        i++;
    }

    //Set the code count to the num_stations member of new_route
    new_route.num_stations = i;

    //create a pointer to the new route
    Route *ptr = &new_route;
    return ptr;
}

void display(Route *ptr_to_route) {

    //get the route
    Route route = *ptr_to_route;

    Station *first_station, *temp;
    first_station = route.first_station;

    temp = first_station;
    //While loop prints stations until goes past the last station, giving temp a NULL value
    while (temp != NULL) {
        printf("%s", temp->code);
        temp = temp->next;
    }
}

void search(Route *ptr_to_route, char code[STATION_CODE_LENGTH]){

    //variable initialization
    int count = 0;
    Route route = *ptr_to_route;

    Station *first_station, *temp, *temp_next, *temp_next_next;
    first_station = route.first_station;

    temp = first_station;

    for(int i = 0; i <= route.num_stations; i++){
        //compare the strings using strcpy()
        if (strcpy(code,temp->code) == 0){
            temp_next = temp->next;
            temp_next_next = temp_next->next;

            if (temp_next == NULL){
                char error[] = "Beyond end of line.";
                printf("Code position: %d", count);
                printf("Next two codes:\n%s\n%s", error, error);

            }
            else if (temp_next_next == NULL) {
                printf("Code position: %d", count);
                printf("Next two codes:\n%s\n%s", temp_next->code, temp_next_next->code);
            } else {
                char error[] = "Beyond end of line.";
                printf("Code position: %d", count);
                printf("Next two codes:\n%s\n%s", temp_next->code, error);

            }
        }
        else
        {
            temp = temp->next;
            count++;
        }
    }

    }


int main() {

    FILE *fp = fopen("code.txt","r");
    Route* new_route = read_stations(fp);
    display(new_route);

    char user_code[STATION_CODE_LENGTH];
    printf("Enter a train code: \n");
    scanf("%s", user_code);

    search(new_route,user_code);
    fclose(fp);


    return 0;
}
