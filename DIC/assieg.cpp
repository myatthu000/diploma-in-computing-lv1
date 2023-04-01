#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    int i=0;
    int wordCountt = 0;
    char filename[20] = "word.txt";
    char words[20] = {'\0'};
    char storeWords[50]={'\0'};

    printf("Enter words less than 20 charactor :");
    scanf("%s",words);
    //printf("%s \n",words);

    fptr = fopen(filename,"r");

    if(fptr == NULL)
    {
        printf("File cannot open: \n");
        exit(-1);
    }

    while(fscanf(fptr,"%s",&storeWords) != EOF){
       // printf("%s",storeWords);
       while(storeWords != '\0')
       {
           if(storeWords[i] == words[i])
            {
                printf("%s \n",storeWords);
            }
       }


    }



    printf("\n");
    printf("\n");
    printf("\n");
    fclose(fptr);
    return 0;
}
