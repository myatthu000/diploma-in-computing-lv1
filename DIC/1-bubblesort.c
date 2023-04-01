/*
    Bubble Sort
*/

#include <stdio.h>

void bubbleSort(int data[],int sizee)
{
    for(int i=0;i<sizee;i++)
    {
        //printf("for i = %d : \n",i);
        for(int j=0;j<sizee;j++)
        {
            //printf("for j = %d : \n",j);
            if(data[j]>data[j+1])
            {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
                //printf("for j = %d : \n",j);
            }
        }
    }
}

int main()
{
    int data_array[] = {5,1,3,7,4,9,6,2,8};
    int sizee = sizeof(data_array)/sizeof(data_array[0]);

    bubbleSort(data_array,sizee);

    printf("size = %d \n",sizee);
    for(int i=0;i<sizee;i++){
        printf("%d : \n",data_array[i]);
    }


    return 0;
}

