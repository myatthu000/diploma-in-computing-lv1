#include<stdio.h>
#define SIZE 100

struct Worker{

    char email[50];

};

struct Worker info[SIZE];


int main()
{

    char wemail[50];
    printf("Enter Email: \n");
    scanf(" %[^\n]",&info[0].email);

    //info[0].email = wemail;
    printf(" email = %s \n",info[0].email);



    return 0;
}


