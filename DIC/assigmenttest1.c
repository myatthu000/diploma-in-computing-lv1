#include<stdio.h>

#define SIZE 2

int efound =-1;
int pfound =-1;

void printingAllData();
void login();
void my_strcmp(char LEmail[50]);
void passwordChecking(char pass[50],int userIndex);

struct Worker{
    int age;
    char name[30];
    char email[50];
    char password[50];
};

struct Worker info[20];

int main()
{

    for(int i=0;i<SIZE; i++)
    {
        printf("Enter age: ");
        scanf("%d",&info[i].age);

        // this expression in scanf mean that accept any letters till \n
        printf("Enter name: ");
        scanf(" %[^\n]",&info[i].name);

        printf("Enter email: ");
        scanf(" %[^\n]",&info[i].email);

        printf("Enter password: ");
        scanf(" %[^\n]",&info[i].password);
    }

    printingAllData();
    login();

    return 0;
}


void printingAllData()
{
    for(int i=0;i<SIZE;i++)
    {
        printf("name: %s - age: %d - email: %s - password: %s \n",info[i].name,info[i].age,info[i].email,info[i].password);
    }
}

void login()
{

    int found = -1;
    char LEmail[50];
    char LPassword[50];

    printf("This is Login Form: \n");

    printf("Enter Your email to Login: \n");
    scanf(" %[^\n]",&LEmail);

    //printf("Enter Your password to Login: \n");
    //scanf(" %[^\n]",&LPassword);


    efound = -1;

    my_strcmp(LEmail);


   // pfound = -1;
    //passwordChecking(LPassword,efound);

    if(efound != -1)
    {
        printf("You are Login. \nWelcome Sir: %s \n",info[efound].email);
        printf("efound = %d",efound);
        //efound = -1;
        //pfound = -1;
        login();
    }else{
        printf("You cannot Login:\n Invalid Password or Email:  %s \n",info[efound].email);
        printf("efound = %d",efound);
        login();
    }
}

void my_strcmp(char userInputChar[50])
{
    int sameCount = 0;
    int sec = charCounting(userInputChar);
    for(int i=0;i<SIZE;i++)
    {
        int first = charCounting(info[i].email);
        if(first == sec)
        {
            for(int j=0;j<first;j++)
            {
                if(info[i].email[j] != userInputChar[j])
                {
                    break;
                }else{
                    sameCount++;
                }
            }
        }
        if(sec == sameCount)
        {
            efound = i;
            printf(" i = %d /n",i);
            printf(" sec = %d /n",sec);
            break;
        }
    }
     printf(" sameCount = %d /n",sameCount);
}


void passwordChecking(char pass[50],int userIndex)
{
    int passCount = charCounting(pass);
    int infoPassCount = charCounting(info[userIndex].password);

    int sameCount = 0;

    if(passCount == infoPassCount)
    {
       for(int i=0;i<passCount;i++)
        {
            if(pass[i] == info[userIndex].password[i])
            {
                sameCount++;
            }else{
                break;
            }
        }
        if(sameCount == passCount)
        {
            pfound = 1;
            //break;
        }
    }
}



int charCounting(char toCount[50])
{
    int charCount = 0;
    for(int i=0;i<50;i++)
    {
        if(toCount[i] == '\0')
        {
            break;
        }else{
            charCount++;
        }
    }
    printf("char count = %d ;",charCount);

    return charCount;
}



