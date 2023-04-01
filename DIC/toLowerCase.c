#include<stdio.h>
void toLowerCase(char *words);
void toUpperCase(char *words);


int main()
{
    char words[50] ;
    scanf("%s",words);

    toUpperCase(words);
    toLowerCase(words);

    return 0;
}

void toUpperCase(char *words){

    int i =0;
    while(words[i] != '\0'){
    if(words[i] >= 97 && words[i] <= 122)
    {
        words[i] -=32;
        //printf("to Upper Case --> %s \n",words);
    }
    i++;
    }
    printf("to Upper Case --> %s \n",words);
}

void toLowerCase(char *words){

    int i =0;
    while(words[i] != '\0'){
    if(words[i] >= 65 && words[i] <= 90)
    {
        words[i] +=32;
        //printf("to Upper Case --> %s \n",words);
    }
    i++;
    }
    printf("to Lower Case --> %s \n",words);
    //for(i=65;i<=90;i++)

}
