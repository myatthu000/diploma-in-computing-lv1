#include<stdio.h>
#include<string.h>

struct Employee;


struct Employee{
    int age;
    char name[20];
}
//e1,e2
;

int main()
{
    struct Employee person1;
    struct Employee person2;

    int age1 = person1.age=20;
    strcpy(person1.name,"WIn Htut");

    int age2 = person2.age=5;
    strcpy(person2.name,"Myat Thu");

    printf("age1 = %d  :  name2 %s \n",age1,person1.name);
    printf("age2 = %d  :  name2 %s \n",age2,person2.name);

    return 0;
}


