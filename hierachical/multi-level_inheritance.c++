#include<iostream>
using namespace std;
class base_one{
    int a;
    public:char b;
    protected:int c;
    public:base_one(){
        a=10;
        cout<<"a="<<a<<endl;
    }
};
class derived_one:public base_one{
    public:void display(){
        b='A';
        c=20;
    }
};
class derived_two:public derived_one{
    public:void display(){
        b='B';
        c=30;
        cout<<"protected data c="<<c<<endl;
        cout<<"public data b="<<b<<endl;
    }
};
int main(){
    derived_two d;
    d.display();
}