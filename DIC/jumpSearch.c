#include <stdio.h>
#include <math.h>


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
    while(arr[min(step,size)-1] < key)
    {
        previous = step;
        //printf("Previous = %d \n",previous);
        step = step + sqrt(size);
        //printf("Step = %d \n",step);

        if(previous >= size)
        {
            return -1;
        }

    }

    //if(arr[min(step,size)-1] == key)
    //{
    //    return 0;
    //}

    printf("Previous : %d \n",previous);

    for(int j = previous;j<=step;j++)
    {
        if(arr[j] == key)
        {
            printf("Pass here \n");
            return j;
        }
    }

    return -1;

}




int main(){

    int arr_data[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,44,55,66,77,88};
    int size = sizeof(arr_data)/sizeof(arr_data[0]);
    int toFind = 4;

    printf("Size is %d \n",size);
    printf("To Find: %d \n",toFind);

    int indexNumber = jumpSearch(arr_data,size,toFind);

    if(indexNumber != -1)
    {
        printf("We Found Data: \n");
        printf("Found at index %d : data %d \n",indexNumber,arr_data[indexNumber]);

    }else
    {
        printf("Not Found. \n");
    }




    return 0;
}
