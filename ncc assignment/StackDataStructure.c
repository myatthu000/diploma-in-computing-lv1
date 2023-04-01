#include <stdio.h>
#define MAXOFSTACK 10


struct Stack{

    int data[MAXOFSTACK];
    int top;


};

typedef struct Stack st;



int isStackIsEmpty(st *myStack)
{
    if(myStack->top == -1)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int isStackIsFull(st *myStack)
{
    if(myStack->top == MAXOFSTACK-1)
    {
        return 1;
    }else
    {
        return 0;
    }
}

void create_emptyStack(st *myStack){
    myStack->top = -1;
}

int pushToStack(st *myStack, int value)
{
    if(isStackIsFull(myStack)){
        printf("Stack is Full. \n");
    }else
    {
        myStack->top++;
        //printf("top = %d \n",myStack->top);
        myStack->data[myStack->top] = value;
    };
}

//LIFO order
void printData(st *myStack)
{
    printf("LIFO Order \n");
    int countData=0;
    for(int i=MAXOFSTACK-1;i>myStack->top;i--)
    {
        countData++;
        printf("Printed data is : %d \n",myStack->data[i],i);
        //printf("Printed data index %d \n",i);
    }
    printf("Total count : %d \n",countData);
}

//Normal order
void printDataNormal(st *myStack)
{
    int countData=0;
    printf("Normal Order \n");
    for(int i=myStack->top+1;i < MAXOFSTACK ;i++)
    {
        countData++;
        printf("Printed data is : %d \n",myStack->data[i],i);
        //printf("Printed data index %d \n",i);
    }
    printf("Total count : %d \n",countData);
}

void popFromStack(st *myStack)
{
    if(isStackIsEmpty(myStack))
    {
        printf("Stack is Empty");
    }else
    {
        printf("--> Pop from stack data is : %d \n",myStack->data[myStack->top]);
        //printf("--> Pop from stack data At index %d \n",myStack->top);

        myStack->top--;

    }
}



int main()
{
    st *myStack = malloc(sizeof(st));

    create_emptyStack(myStack);

    pushToStack(myStack,10);
    pushToStack(myStack,21);
    pushToStack(myStack,31);
    pushToStack(myStack,11);
    pushToStack(myStack,4);
    pushToStack(myStack,65);
    pushToStack(myStack,1);
    pushToStack(myStack,32);
    pushToStack(myStack,25);
    pushToStack(myStack,51);



    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);

    //LIFO order
    printData(myStack);
    // Normal Order
    //printDataNormal(myStack);

    //printf("top : %d \n",myStack->top);

    //for(int i=MAXOFSTACK-1;i > myStack->top ;i--)
    //{
    //    printf("At index : %d | data : %d \n",i,myStack->data[i]);
    //}

    //for(int i=myStack->top+1;i < MAXOFSTACK ;i++)
    //{
    //    printf(" rrrr At index : %d | data : %d \n",i,myStack->data[i]);
    //}

    return 0;
}
