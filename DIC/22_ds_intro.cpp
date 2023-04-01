#include<stdio.h>
#include<stdlib.h>


// structure
struct node())
{
    int data;
    struct node *next;
};

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

    return 0;
}
