#include<stdio.h>

int main(){

    int age1 = 23;
    int age2 = 24;
    int age3 = 25;
    int *p1=&age1;

    printf("Address -> %X \n",p1);
    printf("Address -> %x \n",&age1);
    printf("Value of variable through the address -> %d \n",*p1);


    return 0;
}
