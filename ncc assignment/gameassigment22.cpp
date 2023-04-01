#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>



int userDb[10] ={1111,2222,3333,4444,5555,6666,7777,8888,9999,10000};
//int moneyDb[10];
int userDbIndex=0; //this will count
int global_runner1=0;
int global_runner2=0;
int authatication=0;

int main()
{


    int age=0;
    int option=0;
    int gameOption=0;
    int randNumber=0;
    int choosenNumber=10;
    int userId;
    //int userId2;
    int confirmId;
    bool isLogin = false;

    int money =0;


    printf("\n");
    printf("-------------------Welcome To The Game------------------\n");
    printf("\n");
    printf("Please Enter Your age: ");
    scanf("%d",&age);
    srand(time(NULL));

    //while(age>17 && age<100){
    if(age>17 && age<100)
    {
        printf("You age is enough to play game.\n");

        while(age>17 && age<100)
        {

            printf("Choose Your option;\nPress 1 to Login:\nPress 2 to Register\nPress 3 to Completely Quit the game;\n");
            scanf("%d",&option);

            if(option==1)
            {
                printf("Login Your ID.\n");
                scanf("%d",&userId);
                if(userId > 0){
                    for(int i=0; i<=10; i++)
                {
                    if(userId==userDb[i])
                    {
                        isLogin = true;
                        printf("ID is correct.\n");
                        break;
                    }

                }
                while(isLogin == true || isLogin == false)
                {

                    if(isLogin == true)
                    {
                        printf("You can play now.\n");
                        while(isLogin)
                        {

                            printf("Please Enter your show money.");
                            scanf("%d",&money);

                            while(money)
                            {
                                if(money< 100 || money>10000)
                                {
                                    printf("We limit the money amount at least 100 to 10000:\n");
                                    isLogin = true;
                                    break;
                                }
                                else
                                {
                                    printf("Your money is : %d \n",money);
                                    printf("\n");
                                    printf("\n");
                                    printf("Game Rules:\n ************************** \nThis is a 2D game.There is numbers between 10 and 99.\nYou can choose the numbers you like between them.\nIf you win this, you will get double of your money.If not you will lose all.\n ************************* \n");
                                    printf("\n");
                                    printf("\n");
                                    printf("Let's Play Now.\n");
                                    printf("\n");
                                    printf("\n");
                                    printf("Please enter your 2D number between 10 and 99:");
                                    scanf("%d",&choosenNumber);
                                    while(choosenNumber)
                                    {
                                        randNumber =(rand() % 90)+10;
                                        //randNumber = 15;
                                        //printf("Random number %d:\n",randNumber);
                                        //int temporary_winner_number = 15

                                        if(choosenNumber != randNumber)
                                        {
                                            money = money * 0;
                                            printf("Your ID is %d : \n ",userId);
                                            printf("Your number is : %d :\n",choosenNumber);
                                            printf("Winner number is : %d :\n",randNumber);
                                            printf("You Lose the Game :P :");
                                            printf("Your money is : %d \n",money);
                                            printf("\n");
                                            printf("\n");

                                            printf("Press 1 To Play Again: \nPress any number key + Enter except 1 To completely Exit: \n");
                                            scanf("%d",&gameOption);
                                            if(gameOption == 1)
                                            {
                                                printf("You Press 1 To Play Again: \n");
                                                break;
                                            }
                                            else
                                            {
                                                printf("You Press any number key + Enter except 1 To completely Exit: \n");
                                                printf("\n");
                                                printf("Goodbye ;-( ,Next time,I hope You Will Win the Game\n");
                                                exit(1);
                                            }
                                        }
                                        else
                                        {
                                            while(choosenNumber)
                                            {
                                                if(choosenNumber == randNumber)
                                                {
                                                    money = money * 2;
                                                    printf("Your ID is %d : ",userId);
                                                    printf("Your number is : %d :\n",choosenNumber);
                                                    printf("Winner number is : %d :\n",randNumber);
                                                    printf("You Win the Game: \n");
                                                    printf("You get the reward %d: \n",money);
                                                    if(money>=10000)
                                                    {
                                                        printf("Warning::::::::::::\nYour money is 10000 or above:\nIf your money is beyond 10000, YOu will loose all of it:\nWe limit the amount of money:\n");
                                                    }
                                                    printf("\n");
                                                    printf("\n");
                                                    printf("\n");
                                                    printf("Press 1 To Play Again: \nPress any number key + Enter except 1 To completely Exit: \n");
                                                    scanf("%d",&gameOption);
                                                    if(gameOption == 1)
                                                    {
                                                        printf("You Press 1 To Play Again: \n");
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        printf("You Press any number key + Enter except 1 To completely Exit: \n");
                                                        printf("\n");
                                                        printf("Goodbye,Thanks for playing with me: \n");
                                                        exit(1);
                                                    }

                                                    break;
                                                }
                                                break;
                                            }
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        printf("There is no Id.\nYou should register first.\n");
                        break;
                    }
                    break;
                }
                }else{
                    printf("There is no Id.\nYou should register first.\n");
                }
            }
            else if(option == 2)
            {
                printf("Register Your ID.\n");
                scanf("%d",&userId);
                if(userId > 0)
                {
                    while(userId >0)
                    {
                        for(int i=0; i<10; i++)
                        {
                            if(userDb[i] == userId)
                            {
                                authatication = 1;
                                break;
                            }
                        }
                        if(authatication == 1)
                        {
                            printf("User ID has already token:: \n");
                            printf("You Can Login with this ID::\n");
                            printf("\n");
                            for(int i=0;i<10;i++){
                                printf("ID : %d :\n",userDb[i]);
                            }
                            printf("\n");
                            //printf("index ---> %d \n",userDbIndex);
                            //printf("userId in Db---> %d \n",userDb[userDbIndex]);
                            //global_runner2 = 1;
                            break;
                        }
                        else
                        {
                            printf("Confirm Your ID: ");
                            scanf("%d",&confirmId);
                            while(confirmId)
                            {
                                if(confirmId == userId)
                                {
                                    userDb[userDbIndex] = userId;
                                    printf("Register successfully:\n");
                                    //printf("index ---> %d \n",userDbIndex);
                                    //printf("userId in Db---> %d \n",userDb[userDbIndex]);
                                    userDbIndex++;
                                    if(userDbIndex>=10){
                                        printf("ID database is full.\n");
                                        break;
                                    }
                                    global_runner1 = 1;
                                    break;
                                }
                                else
                                {
                                    printf("Please confirm user Id again:\n");
                                    break;
                                }

                                break;
                            }
                        }
                        if(global_runner1 == 1)
                        {
                            break;
                        }
                        //else if(global_runner2 == 1)
                        //{
                        //    break;
                        //}
                        //break;
                    }
                }
                else
                {
                    printf("User ID cant be Less than or Equal 0\n");
                }
            }
            else if(option == 3)
            {
                exit(1);
            }
        }
    }
    else
    {
        printf("Your age is enough to play game.\nYou should event not open the game: :P \n");
    }
    return 0;
}
