#include<stdio.h>
void passByPointer(int *value);

int main()
{
    int *p;
    int data=20;

    p = &data;
    passByPointer(p);   //pointer through fuction
    printf("value of data = %d \n",*p);

    return 0;
}

void passByPointer(int *value)
{
    (*value)++;
}
