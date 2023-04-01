#include <iostream>;
using namespace std;


class MyClass{

public:
    int age; // attributes
    string name;

    void myMethod() // behaviour
    {
        cout<<"This is method"<<endl;
        //return "This is method";
    }

    void bankIDGetter()
    {
        bankPass,bankID,username;
        cout<<bankID<<endl;
        cout<<username<<endl;
        cout<<bankPass<<endl;
        //return bankID;
    }

    void bankIDSetter(int id,string password,string name)
    {
        //id = bankID;
        //password = bankPass;
        //name = username;
        bankID = id;
        bankPass = password;
        username = name;

    }


private:
    int bankID = 11111;
    string bankPass = "aaaaa";
    string username = "Myat Thu";

};

int main()
{
    MyClass obj;

    obj.age = 23;
    obj.name = "Myat Thu";
    cout<<obj.age<<endl;

    obj.myMethod();
    obj.bankIDGetter();
    //cout<<obj.myMethod()<<endl;
    //cout<<obj.bankIDGetter()<<endl;

    cout<<endl;
    cout<<endl;

    obj.bankIDSetter(22222,"password","Nyi Nyi Zaw");
    cout<<"After setting values\n";
    obj.bankIDGetter();
    cout<<endl;

    return 0;
}
