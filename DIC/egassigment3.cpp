/*
assigment 3
*/

#include<stdio.h>

int main()
{
    int start,endd;

    printf("How many Times You want to add:");
    scanf("%d",&endd);

    //while(endd){
    if(endd)

        int numberDb[endd];

        for(start=0;start<endd;start++)
        {
            numberDb[start] = start+1;
            printf("value = %d : index = %d : address = %X \n",*(numberDb+start),start,&numberDb[start]);
        }
        break;

    //}




    return 0;
}
