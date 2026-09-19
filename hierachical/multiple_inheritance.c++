#include<iostream>
using namespace std;
class base_one{
    public:int a;
    protected:char b;
};
class base_two{
    public:int c;
    
};
class derived:public base_one,public base_two{
    public:void display(){
        a=10;
        b='A';
        c=20;
        cout<<"public data a="<<a<<endl;
        cout<<"protected data b="<<b<<endl;
        cout<<"public data c="<<c<<endl;
    }
};
int main(){
    derived d;
    d.display();
}