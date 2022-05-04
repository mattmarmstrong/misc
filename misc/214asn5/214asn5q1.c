#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Matthew Armstrong
//11175550

void swapLastColumn(char *file1, char *file2)
{
    //Reading the two files given as input
    FILE *infile1 = fopen(file1, "r");
    FILE *infile2 = fopen(file2,"r");

    //Quick check to make sure the files were able to be opened
    if(infile1 == NULL) {
        printf("Unable to open %s.\n", file1);
        exit(1);
    }
    if(infile2 == NULL) {
        printf("Unable to open %s.\n", file2);
        exit(1);
    }


    //Creating two files named fruits-revised.txt and dairy-revised.txt that we will modify
    FILE *outfile1 = fopen("fruits-revised.txt", "w");
    FILE *outfile2 = fopen("dairy-revised.txt","w");

    //I'm not including a NULL check here for these two files because fopen creates a file if it doesn't exist so it
    //shouldn't ever be NULL


    //declaring our array to store the heading
    const size_t BUF_SIZE = 600; //6 titles, all of 100 or less characters
    char headerLine1[BUF_SIZE];
    char headerLine2[BUF_SIZE];

    //Copying the file headings to the new outfiles for both fruits.txt and dairy.txt
    fgets(headerLine1, BUF_SIZE, infile1);
    fgets(headerLine2, BUF_SIZE, infile2);

    fprintf(outfile1, "%s\n", headerLine1);
    fprintf(outfile2, "%s\n", headerLine2);



    //start the while loop we'll use to get through the file. || is slightly redundant b/c the files are same length
    //but i kept it anyway
    while (!feof(infile1) || !feof(infile2))
    {
        //temp variables for the data in both files (f_ for fruits, d_ for dairy)
        char f_date[25], d_date[25];
        int f_data1, f_data2, f_data3, f_data4, f_data5, d_data1, d_data2, d_data3, d_data4, d_data5;

        //scan each line and store in the respective temp locations
        fscanf(infile1, "%s%d%d%d%d%d\n", f_date, &f_data1, &f_data2, &f_data3, &f_data4, &f_data5);
        fscanf(infile2, "%s%d%d%d%d%d\n", d_date, &d_data1, &d_data2, &d_data3, &d_data4, &d_data5);

        //copy the data to the new files, swapping the watermelon and yogurt data (the 5th data piece of each file)
        fprintf(outfile1, "%s%d%d%d%d%d", f_date, f_data1, f_data2, f_data3, f_data4, d_data5);
        fprintf(outfile2, "%s%d%d%d%d%d", d_date, d_data1, d_data2, d_data3, d_data4, f_data5);
    }

//close all the files when the while loop terminates
    fclose(infile1);
    fclose(infile2);
    fclose(outfile1);
    fclose(outfile2);

}



int main(int argc, char** argv) {
    if(argc < 3 || argc > 3) {
        printf("Invalid number of file inputs (2 required). Usage is 'gcc 214asn5q1.c fruits.txt dairy.txt'");
    }
    else{
        swapLastColumn(argv[1], argv[2]);
    }
    return 0;
}
