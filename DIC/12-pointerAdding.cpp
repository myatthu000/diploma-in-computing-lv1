#include<stdio.h>

int main()
{
    //int data[8] = {10,20,30,40,50,60,70,80};
    int data[6] = {'a','b','c','x','r','e'};
    int *ptr;

    ptr = &data[3];

    // address *ptr=&data;
    // *ptr mean value
    // &data , ptr are address
    // *(ptr+1) it will output values, ptr+1 it will add 1 bytes to address ptr, So the output will be the next memory address

    printf(" Pointer value = %d \n",*ptr);
    printf(" Pointer(ptr+1) value = %c : Pointer address = %X \n",*(ptr+1),ptr+1);
    printf(" Pointer(ptr-1) value = %c : Pointer address = %X \n",*(ptr-1),ptr-1);
    //printf(" %X Pointer address = %X \n",10,ptr+1);

    return 0;
}
