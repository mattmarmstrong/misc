#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Matthew Armstrong
//11175550


int lineCount(FILE *fp){

    //initialize variables for count and the current character
    int count = 0;
    char c;
    //use fgetc() to iterate through the file char by char, counting new line characters
    while((c = fgetc(fp)) != EOF){
        if (c == '\n') {
            count++;
        }
    }
    return count;
}

const size_t COL_NUM = 6;


void display_sales(char* header[COL_NUM], const int *salesArray, int count) {

    //iterate through the sales array, starting at column 2 (ignoring the dates column)
    for(int i = 1; i <=5; i++)
    {
        int units_sold = 0;
        for(int j = 0; j < COL_NUM; j++)
        {

        }
        printf("Total %s sales: %d\n", header[i], units_sold);
    }
}





int main(int argc, char** argv) {
    if(argc < 3 || argc > 3) {
        printf("Invalid number of file inputs (2 required). Usage is 'gcc 214asn5q2.c fruits-revised.txt dairy-revised.txt'");
    }

    //ints for the line counts of files 1 and 2
    int lc1, lc2;

    //FILE type ptr objects for the two file arguments
    FILE *fp1, *fp2;

    fp1 = fopen(argv[1],"r");
    fp2 = fopen(argv[2],"r");

    //count lines
    lc1 = lineCount(fp1);
    lc2 = lineCount(fp2);

    //line count check
    if (lc1 < 2 || lc2 < 2 || lc1 != lc2){
        printf("Files do not follow required format (greater than 2 lines, equal num of lines). Exiting");
        exit(1);
    }
    //rewind both files
    rewind(fp1);
    rewind(fp2);

    //ints to store the iteration values
    int i = 0;
    int j = 0;

    //header arrays
    char * header1[COL_NUM], header2[COL_NUM];

    //1D sales arrays

    int * salesArray1, salesArray2;

    for (char c = fgetc(fp1); c != EOF; c = fgetc(fp1)) {
        if (c == ' ') {
            i++;
            j = 0;

        }
        //if newline char is encountered break the loop
        else if (c == '\n') {
            break;
        }
        else {
            header1[i][j] = c;
            j++;
        }
    }

    //date string
    char date_string[10];


    //re-declare the ints and start again with file arg 2
    i = 0;
    j = 0;


    return 0;
}
