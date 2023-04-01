#include<stdio.h>
#include<stdlib.h>


// structure
struct node
{
    int data;
    struct node *next;
};

struct node* insertAtBeginning(struct node *myNode,int data_for_newNode)
{
    struct node *beginNode = malloc(sizeof(struct node));
    beginNode->data = data_for_newNode;
    beginNode->next = myNode;
    //memory address ko myNode ko htet pay like tr
    myNode = beginNode;
    return myNode;
}

void insertAtBeginningREF(struct node **myNode,int data_for_newNode)
{
    struct node *beginNode = malloc(sizeof(struct node));
    beginNode->data = data_for_newNode;
    beginNode->next = (*myNode);
    (*myNode) = beginNode;
}


int searchData(struct node* myNode,int data){

    if(myNode == NULL){
        printf("Node cannot be null");
        return -1;
    }

    while(myNode != NULL)
    {
        if(myNode->data == data){
            return 1;
        }else{
            myNode = myNode->next;
        }
    }
    return -1;
}


void insertAfter(struct node* prevNode,int data){

    if(prevNode == NULL){
        printf("Node cannot be null");
        return;
    }else{
        struct node * newNode = malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = prevNode->next;
        prevNode->next = newNode;
    }
}




void printData(struct node* myNode){

    while(myNode != NULL){
        printf("data : %d \n",myNode->data);
        myNode = myNode->next;
    }

}

int main()
{
    // data type ကိုတည်ဆောက်ပေး
    struct node *head = NULL;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // memory ပေါ်မှာနေရာ ယူပေးခြင်း (use malloc)
    // malloc ပုံစံ နှစ်မျီုး ဖြင့်သုံးနိုင် ။
    // malloc ကိုအသုံးပြုပြီး can create Type and Size

    // malloc(parameter sizeof(structure))
    // malloc give memory address. So we assign that address to one;
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->data = 10;
    two->data = 20;
    three->data = 30;

    //head->next =
    one->next = two;
    two->next = three;
    three->next = NULL;

    printf("%s \n","Pass");

    printData(one);

    int result = searchData(one,20);
    if(result == 1){
        printf("Found Data : \n");
    }else{
        printf("Not Found Data : \n");
    }

    insertAfter(one,54);
    printf("Insert After New node and data : \n");
    printData(one);
    printf("Insert atBeginningNode : \n");
    //printData(insertAtBeginning(one,7));
    struct node *newLL = insertAtBeginning(one,7);
    printData(newLL);

     printf("Insert atBeginningNodeREF : \n");
    //printData(insertAtBeginning(one,7));
    insertAtBeginningREF(&one,43);
    printData(one);



    return 0;
}
