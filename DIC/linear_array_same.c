#include<stdio.h>
#define SIZE 100

char arr1[11] = "@gmail.com";
char arr2[11] = "@gmail.com";
int same_countt = 0;
int not_same_countt =0;



int main()
{
    char email[11];
    printf("Enter Gmail : ");
    //scanf(" %[^\n]",&email);

    printf("Your Mail is %s \n",email);

    for(int i=0;i<SIZE ;i++){
        if(arr1[i] == '\0' && arr2[i] == '\0')
        {
            break;
        }else{
            //printf("Array 1 = %c Array 2 = %c \n",arr1[i],arr2[i]);
        }

    }


    //Check If gamil format is correct

     for(int i=0;i<SIZE ;i++){

        if(!(arr1[i] == '\0' && arr2[i] == '\0'))
        {
           if(arr1[i] == arr2[i])
            {
                same_countt++;
                printf("Same: --> %c = %c \n",arr1[i],arr2[i]);
            }else{
                not_same_countt++;
                printf("Not Same: --> %c != %c \n",arr1[i],arr2[i]);
                break;
            }
        }
    }

    if(same_countt == 10)
    {
        printf("Gmail format is correct.\n");
    }else{
        printf("Gmail format is incorrect.\n");
    }

    printf("Count = %d \n",same_countt);
    printf("Not Same Count = %d \n",not_same_countt);

    return 0;
}
