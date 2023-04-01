/*
    Assignment 3
*/

#include<stdio.h>

int main()
{
    int arrayNumber[100];
    int number;
    FILE *fptr,*fptr_for_read;

    fptr =  fopen("tt.txt","w");

    if(fptr == NULL)
    {
        printf("File cannot open: \n");
    }
    else
    {
        // Insert Data in tt.txt file by looping 1 to 100;
        for(int i=0; i<100; i++)
        {
            int k = i+1;
            fprintf(fptr,"%d%c",k,'\n');
        }
        printf("Insert Data to tt.txt file successfully: \n");
        fclose(fptr);
    }

    printf("\n");

    // reading file and insert data to array and show in console;
    fptr_for_read = fopen("tt.txt","r");

    if(fptr_for_read == NULL)
    {
        printf("File cannot Read: \n");
    }
    else
    {
        //read from .txt file and insert data to array
        for(int j=0; j<100; j++)
        {
            fscanf(fptr_for_read,"%d",&number);
            arrayNumber[j] = number;
        }

        //show in console
        for(int h=0; h<100; h++)
        {
            //printf("%d \n",arrayNumber[h]);
            printf("index  =  %d  : value  =  %d \n",h,arrayNumber[h]);
        }
        fclose(fptr_for_read);
    }


    return 0;
}
