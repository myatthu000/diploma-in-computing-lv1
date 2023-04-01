/*
    Assignment - 4
    Search word in text file
*/

#include<stdio.h>


int main()
{
    FILE *fptr,*fptr_read;

    fptr = fopen("word.txt","r");

    if(fptr == NULL){
        printf("File cannot Open : \n");
    }





    return 0;
}
