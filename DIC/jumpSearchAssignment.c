#include <stdio.h>
#include <math.h>
/*
    Finished Assignment
*/

int min(int first,int second)
{
    if(second > first)
    {
        return first;
    }else
    {
        return second;
    }
}


int jumpSearch(int arr[],int size,int key)
{
    int step = sqrt(size);
    printf("Step = %d \n",step);
    int previous = 0;
    //printf("--> %d \n",arr[min(step,size)-1]);
    //printf("--> %d \n",arr[min(step,size)]);

    if(arr[min(step,size)-1] < key)
    {
        while(arr[min(step,size)-1] < key)
        {
            previous = step;
            step = step + sqrt(size);

            if(arr[min(step,size)-1] == key)
            {
                //printf("Pass On Equal 1 \n");
                //printf(" value %d : index %d steps %d \n",arr[min(step,size)-1],min(step,size)-1,step);

                return min(step,size)-1;
            }

            //printf("Step = %d \n",step);
            //printf("Pass On while Loop value %d : index %d steps %d size %d previous %d \n",arr[min(step,size)-1],min(step,size)-1,step,size,previous);
            //printf("Data = %d \n",arr[min(step,size)-1]);

            if(previous >= size)
            {
                return -1;
            }

        }
    }

    if(arr[min(step,size)-1] == key)
    {
        //printf("Pass On Equal 2 \n");
        return min(step,size)-1;
    }

    printf("Previous : %d \n",previous);

    for(int j = previous;j<=step;j++)
    {
        if(arr[j] == key)
        {
            //printf("Previous : %d \n",previous);
            //printf("Pass here \n");
            return j;
        }
    }

    return -1;

}




int main(){

    int arr_data[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,44,55,66,77,88,89,123,124,125,456,457,458};
    int size = sizeof(arr_data)/sizeof(arr_data[0]);
    int toFind;
    printf("Data To Find :");
    scanf("%d",&toFind);

    printf("Size is %d \n",size);
    printf("To Find: %d \n",toFind);

    int indexNumber = jumpSearch(arr_data,size,toFind);
    //printf("rrr %d \n",indexNumber);

    if(indexNumber != -1)
    {
        printf("Found Data: \n");
        printf("Found at index %d : data %d \n",indexNumber,arr_data[indexNumber]);

    }else
    {
        printf("Not Found. \n");
    }




    return 0;
}
