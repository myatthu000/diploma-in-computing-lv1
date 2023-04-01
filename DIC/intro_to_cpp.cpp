#include "iostream"

using namespace std;


int main()
{

    string name;
    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if(age>17){
        cout<<"Your age is: "<<age;
    }else{
        cout<<"Your age is under 17: ";
    }

    return 0;
}
