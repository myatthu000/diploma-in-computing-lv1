#include<stdio.h>

int main()
{

    int n,m,s;
    char words[255];
    char searchWord[] = {"Winhtut"};

    printf("Search Word :");
    scanf("%s",words);
    printf("%s",words);

    while(words[n] != "\0"){
        printf("found out: %c \n",words[n]);
        n++;
    }
    if(searchWord == words){
        printf("found out: \n");
    }else{
        printf("not found: \n");
    }

    printf("\n\n\n");
    return 0;
}


void asciiChar()
{
    //65-90 97-122;
    int i,j,k,h;
    //for()




}
