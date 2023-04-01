#include <stdio.h>

int counter=0;
int innerCounter=0;
void bubbleSort(int data[],int sizee)
{
    // 9-1= 8 i<8 = i start 0 to 7 , 7<8 ,
    for(int i=0;i<sizee-1;i++)
    {
        counter++;
        //printf("for i = %d :",i);
        for(int j=0;j<sizee-i-1;j++)
        {

            //printf("for i = %d : for j = %d : \n",i,j);
            if(data[j]>data[j+1])
            {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
                //printf("%d : %d \n",data[j],data[j+1]);
            }
            innerCounter++;
        }
    }
}

int main()
{
    int data_array[] = {5,1,3,7,4,9,6,13,2};
    int sizee = sizeof(data_array)/sizeof(data_array[0]);
    //printf("size = %d \n",sizee);
    for(int i=0;i<sizee;i++){
        //printf("index = %d : value = %d \n",i,data_array[i]);
    }

    bubbleSort(data_array,sizee);

    printf("size = %d \n",sizee);
    for(int i=0;i<sizee;i++){
        printf("index = %d : value = %d \n",i,data_array[i]);
    }

    printf("Counter = %d \n",counter);
    printf("Inner Counter = %d \n",innerCounter);

    return 0;
}

