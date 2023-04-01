#include<stdio.h>

int main()
{

    int n,m,s = 0;
    char words[255];
    char searchWord[255]={"winhtut"};


    printf("Search Word :");
    scanf("%s",words);
    //printf("%s \n",words);

    //while(words(m)){
    //    printf("%c \n",words[m]);
    //}

    while(words[m] != '\0' && searchWord[m] != '\0'){
        if(searchWord[m] == words[m]){
            printf("found %c : %c \n",words[m],searchWord[m]);
        }else{
            //printf("not found %c : %c  \n",words[m],searchWord[m]);
        }
        //printf("%d found out: %c : %c \n",m,words[m],searchWord[m]);

        m++;
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
