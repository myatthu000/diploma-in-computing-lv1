#include<stdio.h>
#define SIZE 100

struct Worker{

    int id;
    int age;
    char name[30];
    char email[50];
    char password[50];
    char phone[15];

};

struct Worker info[SIZE];

void phone_input();
void printingAllData();

int main()
{
    phone_input();
}




void phone_input()
{
    printf("Enter your phone number.");
    scanf(" %[^\n]",&info[0].phone);
    //printf("phone: %d \n",info[0].phone);

    for(int i=0;i<=15;i++)
    {
        if(info[0].phone[i] == " %[^\n]")
        {
            printf()
        }
        printf("%c",info[0].phone[i]);
    }
    printf("phone: %s \n",info[0].phone);

}

















