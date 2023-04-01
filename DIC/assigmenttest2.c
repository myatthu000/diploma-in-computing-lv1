#include<stdio.h>
#define SIZE 500
#include<stdlib.h>

struct Worker{

    int id;
    int age;
    char name[30];
    char email[50];
    char password[50];

};

struct Worker info[SIZE];


int globalIndex =0;
void printingAllData();
void login();
void loadingAllDataFromFile();
void UserActionSector();
int charCounting(char toCount[50]);
void passwordChecking(char pass[50],int userIndex);
void myStrCmp(char userInputChar[50]);
void Registeration();
void Lobby();


int efound =-1;
int pfound =-1;

int main()
{
    loadingAllDataFromFile();
    printingAllData();
    Lobby();
    //login();
    return 0;
}

void Lobby()
{
    int lob = 0;
    printf("This is Lobby Sector: \n");
    printf("Press 1 to Register: \n");
    printf("Press 2 to Login: \n");
    printf("Press 3 to Exit: \n");
    scanf(" %d",&lob);
    if(lob==1)
    {
        printf("Register Now: \n");
        Registeration();
    }else if(lob == 2)
    {
        printf("Login Now: \n");
        login();
    }else if(lob ==3 )
    {
        recordingAllDataToFile();
        exit(1);
    }else{
        printf("Invalid Option: \n");
        Lobby();
    }
}



void printingAllData()
{
    for(int i=0;i<globalIndex;i++)
    {
        printf("id: %d name: %s - age: %d - email: %s - password: %s \n",info[i].id,info[i].name,info[i].age,info[i].email,info[i].password);
    }
}

void login()
{
    char LEmail[50];
    char LPassword[50];
    int found = -1;

    printf("Login Form: \n");
    printf("Enter email: ");
    scanf(" %[^\n]",&LEmail);

    printf("Enter Password: ");
    scanf(" %[^\n]",&LPassword);

    efound = -1;
    pfound = -1;
    myStrCmp(LEmail);

    passwordChecking(LPassword,efound);

    if(efound != -1 && pfound == 1)
    {
        UserActionSector();
        //printf("You are Login. \nWelcome Sir: %s \n",info[efound].email);
        //efound =-1;
        //login();
    }else{
        printf("You cannot Login:\n Invalid Password or Email:  %s \n",info[efound].email);
        login();
    }
}



void myStrCmp(char userInputChar[50])
{
    int sameCount = 0;
    int sec = charCounting(userInputChar);

    for(int i=0; i<globalIndex; i++)
    {
        int first = charCounting(info[i].email);

        if(first == sec)
        {
            for(int gcc=0; gcc<first; gcc++)
            {
                if(info[i].email[gcc] != userInputChar[gcc])
                {
                    break;
                }else{
                    sameCount++;
                }
            }
        }
        if( sec == sameCount )
        {
            efound = i;
            break;
        }
    }

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
    for(int gcc=0; gcc<50; gcc++)
    {
        if( toCount[gcc] == '\0' )
        {
            break;
        }else{
            charCount++;
        }
    }
    //printf("char count = %d ;",charCount);

    return charCount;
}

void Registeration()
{
    int i = globalIndex++;

    printf("Global index = %d : %d \n",i,globalIndex);

    printf("Enter email: ");
    scanf(" %[^\n]",&info[i].email);

    efound = -1;
    myStrCmp(info[i].email);

    //if(efound == -1)
    //{
        printf("You can register your email, name, password: \n");

        info[i].id = globalIndex;

        printf("Enter age: ");
        scanf("%d",&info[i].age);

        printf("Enter name: ");
        scanf(" %[^\n]",&info[i].name);

        printf("Enter password: ");
        scanf(" %[^\n]",&info[i].password);

        recordingAllDataToFile();
        //printingAllData();


    //}else{
    //    printf("Email Already Exit: \n");
    //}

}


void recordingAllDataToFile()
{
    FILE *fptr = fopen("assignment.txt","w");
    if(fptr == NULL)
    {
        printf("Error at recordingAllDataToFind :\n");
    }else{

        for(int i=0;i<globalIndex; i++)
        {
            fprintf(fptr,"%d %d %s %s %s%c",info[i].id,info[i].age,info[i].name,info[i].email,info[i].password,'\n');
            //printf("recording data -->%d\n",globalIndex);
        }

        printf("Recording data to text file successfully: \n");

    }
    fclose(fptr);
}



void UserActionSector()
{
    int userAction = 0;
    printf("You are Login. \nWelcome Sir: %s \n",info[efound].email);
    printf("Press 1 to User Action Sector: \n");
    printf("Press 2 to Home: \n");
    printf("Press 3 to Exit: \n");
    scanf(" %d",&userAction);

    if(userAction == 1)
    {
        printf("User Action Sector: \n");
    }else if(userAction == 2)
    {
        login();
    }else if(userAction == 3)
    {
        recordingAllDataToFile();
        exit(1);
    }else{
        printf("Invalid Option: \n");
        UserActionSector();
    }

}



void loadingAllDataFromFile()
{
    FILE *fptr = fopen("assignment.txt","r");
    if(fptr == NULL)
    {
        printf("Error at Loading ... \n");
    }else{

        for(int i=0; i<SIZE; i++)
        {
            fscanf(fptr,"%d%d%s%s%s",&info[i].id,&info[i].age,&info[i].name,&info[i].email,&info[i].password);

            if(info[i].name[0] == '\0')
            {
                break;
            }
            globalIndex++;
        }
    }
    fclose(fptr);
}





