#include<stdio.h>

int main()
{
    int i, data[5], total=0;
    printf("Enter 10 number: ");

    for(i=0; i<5; i++)
    {
        scanf("%d",data+i); //1 = 10,
        total = total + *(data+i); //value ko you lite tr
        //printf("Total in loop : %d \n",total);

    }

    //total += *(data+1);
    printf("Total : %d \n",total);

    for(int x=0;x<5;x++)
    {
        printf("Data at index = %d : memory address at = %x \n",data[x],&data+x);


    }



    return 0;
}
