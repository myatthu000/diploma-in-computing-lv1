#include<stdio.h>


int main()
{

    char searchWord[] = {"winhtut"};
    // scanf("%s",&searchWord);
    // printf("data : %s \n",searchWord);

    FILE *fptr;
    fptr = fopen("a4test.txt","r");

    if(fptr == NULL)
    {
        printf("File cannot open \n");
    }
    else
    {
        char filee = fscanf(fptr,"%s",&searchWord);
        while(filee != EOF)
        {
            printf("from file : %s \n",searchWord);
        }
    }

    return 0;
}
