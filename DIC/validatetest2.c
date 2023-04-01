#include<stdio.h>
#define SIZE 50


char email_format[11] = "@gmail.com";
char va = '@';
int same_countt = 0;
int not_same_countt =0;
int go_check = -1;
int glob_var1 = 0;
void Check_Count_function();
void validate_email(char email[SIZE]);

struct Worker{
    char email[50];
};

struct Worker info[SIZE];

int main()
{
    char email[SIZE];
    printf("Enter Gmail : ");
    scanf(" %[^\n]",&email);

    printf("Your Mail is %s \n",email);

    validate_email(email);

    Check_Count_function();

    return 0;
}

void validate_email(char email[SIZE])
{
    for(int i=0;i<SIZE ;i++){
        if(email[i] == '\0')
        {
            break;
        }else{
            if(email[i] == va)
            {
                glob_var1 = i;
                go_check = 1;
            }
            printf("email = %c \n",email[i]);
        }
    }

    for(int i=0;i<SIZE ;i++){
        if(email_format[i] == '\0')
        {
            break;
        }else{

            printf("email_format = %c \n",email_format[i]);
        }

    }

    if(go_check ==1)
    {
        printf("@@@ Format Checking start Now: %d \n",glob_var1);
        for(int j=0;j<11 ;j++){
            int i = glob_var1;
            if(email[i] == email_format[j] && email[i] != '\0' && email_format[j] != '\0')
            {
                same_countt++;
                ++glob_var1;
                printf("Correct: --> %c = %c \n",email[i],email_format[j]);
            }else{
                not_same_countt++;
                printf("Incorrect: --> %c != %c \n",email[i],email_format[j]);
                break;
            }

        }
    }

}

void Check_Count_function()
{
    if(same_countt == 10)
    {
        printf("Gmail format is correct.\n");
    }else{
        printf("Gmail format is incorrect.\n");
    }

    printf("Count = %d \n",same_countt);
    printf("Not Same Count = %d \n",not_same_countt);
}
