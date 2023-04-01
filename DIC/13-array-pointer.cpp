/*
Pointer Array
3 types of function pass :
function ကိုဖြတ်တဲ့အချိန်မှာ ၃ မျိုးရှိတာ်
    1.Pass by value
    2.Pass by Reference
    3.Pass by Pointer
*/
//This program is pass by reference;
#include<stdio.h>
void swap(int *d1,int *d2);


int main()
{
    int data1 = 10;
    int data2 = 20;

    // *d1 = &data1; or d1 = data1;
    // *d1 = &data2; or d2 = data2;
    // *d1 mean value
    // d1 and &data1 mean pointer/address;


    swap(&data1,&data2);    // Pass by reference
    printf("data 1 = %d : data 2 = %d",data1,data2);

    return 0;
}



void swap(int *d1,int *d2)
{
    int tempo;
    tempo = *d1; // *d1 mean value of data1
    *d1 = *d2;
    *d2 = tempo;
}
