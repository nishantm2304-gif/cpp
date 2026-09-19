#include<iostream>
    
using namespace std;
class Overloading_constructor
{
    public: Overloading_constructor(int a=0)
    {
        cout<<"Value is: "<<a<<endl;
    }
    public: Overloading_constructor(int a, int b)
    {
        cout<<"Value is: "<<a+b<<endl;
    }
    public: Overloading_constructor(int a, int b, int c)
    {
        cout<<"Value is: "<<a+b+c<<endl;
    }
};
int main(){
    Overloading_constructor obj1;
    Overloading_constructor obj2(10);
    Overloading_constructor obj3(10,20);
    Overloading_constructor obj4(10,20,30);
    return 0;
}