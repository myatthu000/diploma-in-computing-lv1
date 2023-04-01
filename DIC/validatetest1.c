#include<stdio.h>
void validate_email_format();

int main()
{
    char email[50];
    char va = '@';
    char vemail[11] = "@gmail.com";
    char vemail1[11] = "@gmail.com";



    printf("Enter email: ");
    scanf(" %[^\n]",&email);



    for(int i=0; i<50; i++)
    {

        if(email[i] == '\0')
        {
            break;

        }else{

            printf("--> %c \n",email[i]);
        }
    }
    printf("Your Email is : %s \n",email);


}


void validate_email_format()
{
    char vemail[11] = "@gmail.com";
    printf("--> %s \n",vemail);
    for(int i=0; i<50; i++)
    {
        if(vemail[i] == '\0')
        {
            break;
        }else{
            printf("--> %c \n",vemail[i]);
        }
    }
}

