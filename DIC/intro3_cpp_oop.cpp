#include<iostream>;
using namespace std;

class MyClass{

public:
    MyClass(string name){
        cout<<name<<endl;
    }


};

int main()
{
    MyClass obj1("Myat Thu");
    MyClass obj2("Thu Thu");

    return 0;
}
