/*
    ...........................
    Assignment for NCC DICLV1
    WORD FINDER PROGRAM
    ...........................

*/

#include<stdio.h>
#include<stdlib.h>
void toLowerCase(char *words);
void toUpperCase(char *words);


int main()
{
    FILE *fptr;
    int i=0;
    int wordCountt = 0;
    char filename[20] = "words.txt";
    char words[20] = {'\0'};
    char storeWords[100]={'\0'};


    printf("Enter words less than 20 charactor without spacing:");
    scanf("%s",words);
    //printf("%s \n",words);
    toLowerCase(words);
    fptr = fopen(filename,"r");
    if(fptr == NULL)
    {
        printf("File cannot open: \nYou should check the file first.\n");
        exit(0);
    }

    while(fscanf(fptr, "%s", storeWords) != EOF){
        toLowerCase(storeWords);
        int i = 0;
        int match =1;
        while(storeWords[i] != '\0' || words[i] != '\0'){
            if(words[i] != storeWords[i])
            {
                //printf("%s","found \n");
                match = 0;
            }
            i++;
        }
        if(match == 1){
            wordCountt++;
        }
    }
    if(wordCountt == 0){
        printf("The words is: %s : Words not found .",words);
    }else{
        printf("\nThe words is: %s\nTotal words count: %d",words,wordCountt);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    fclose(fptr);
    return 0;
}


void toLowerCase(char *words){

    int i =0;
    while(words[i] != '\0'){
    if(words[i] >= 65 && words[i] <= 90)
    {
        words[i] +=32;
    }
    i++;
    }
    //printf("to Lower Case --> %s \n",words);
    //for(i=65;i<=90;i++)
}

void toUpperCase(char *words){

    int i =0;
    while(words[i] != '\0'){
    if(words[i] >= 97 && words[i] <= 122)
    {
        words[i] -=32;
    }
    i++;
    }
    //printf("to Upper Case --> %s \n",words);
}
