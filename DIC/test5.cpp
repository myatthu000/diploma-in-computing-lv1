#include<stdio.h>
//while

int main()
{
    int i=0,j=0,h=0;
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
        // Insert Data in tt3.txt file by looping 1 to 100;
        while(i<100)
        {
            i++;
            fprintf(fptr,"%d%c",i,'\n');
        }
        printf("Insert Data to tt.txt file successfully: \n");
        fclose(fptr);
    }

    // reading file and insert data to array and show in console;
    fptr_for_read = fopen("tt.txt","r");

    if(fptr_for_read == NULL)
    {
        printf("File cannot Read: \n");
    }
    else
    {
        //read file and insert data to array
        while(j<100)
        {
            fscanf(fptr_for_read,"%d",&number);
            arrayNumber[j] = number;
            j++;
        }
        printf("\n");
        //show data in console from array
        while(h<100)
        {
            printf("index  =  %d  : value  =  %d \n",h,arrayNumber[h]);
            h++;
        }
        fclose(fptr_for_read);
    }


    return 0;
}
