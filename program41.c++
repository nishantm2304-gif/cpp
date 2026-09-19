#include<iostream>
using namespace std;
class base_class{
    public:virtual int addition()=0;
};
class derived_class:public base_class{
    public:int a=90;
    public:int b=70;
    public:int addition(){
        cout<<"addition="<<a+b;
    }
};
int main(){
    derived_class d1;
    d1.addition();
}