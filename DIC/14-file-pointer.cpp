#include<stdio.h>
//#include<filesystem>

int main()
{
    int num;
    FILE *fptr;

    fptr = fopen("tt1.txt","r");
    if(fptr == NULL)
    {
        printf("There is no file; \n");
    }
    else
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        fprintf(fptr,"%d%c",num,' ');
        printf("%d",fptr);

    }


    return 0;
}
