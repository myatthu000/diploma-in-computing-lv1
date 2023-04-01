#include<stdio.h>

int main()
{
    int arrayNumber[100];
    int number;
    FILE *fptr,*fptr_for_read;
    fptr =  fopen("tt3.txt","w");
    if(fptr == NULL)
    {
        printf("File cannot open: \n");
    }
    else
    {
        // Insert Data in tt3.txt file by looping 1 to 100;
        for(int i=0; i<100; i++)
        {
            int k = i+1;
            fprintf(fptr,"%d%c",k,'\n');
        }
        printf("Insert Data to tt3.txt file successfully: \n");
        fclose(fptr);
    }
    // reading file and insert data to array and show in console;
    fptr_for_read = fopen("tt3.txt","r");
    if(fptr_for_read != NULL)
    {
        for(int j=0; j<100; j++)
        {
            fscanf(fptr_for_read,"%d",&number);
            arrayNumber[j] = number;
            printf("%d \n",arrayNumber[j]);
        }
        fclose(fptr_for_read);
    }else{
        printf("File cannot Read: \n");
    }


    return 0;
}
