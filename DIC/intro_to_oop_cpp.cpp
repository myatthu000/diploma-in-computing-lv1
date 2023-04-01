#include "iostream"

using namespace std;


class MyClass
{

public:
    int age;
    string name;
    void work(string work)
    {
        cout<<"You part is :"<<work;
    };

    //get from private;
    void getInfoFromBank()
    {
        bankInfo.cardID = cardID;
        bankInfo.amount = amount;
        bankInfo.cardName = cardName;
    }

private:
    void bankInfo()
    {
        string cardName;
        int cardID;
        int amount;
    }

};

int main()
{
    MyClass MgMg;
    MyClass Employee2;

    MgMg.name = "Mg Mg";
    MgMg.age=25;

    Employee2.name = "Myat Myat";
    Employee2.age=23;

    cout<<"Employee's informations :"<<endl<<MgMg.name<<endl<<MgMg.age<<endl;
    cout<<"Employee's informations :"<<endl<<Employee2.name<<endl<<Employee2.age<<endl;


    return 0;
}
