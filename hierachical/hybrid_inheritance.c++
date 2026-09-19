#include<iostream>
using namespace std;
class basecls{
    public:basecls(){
        cout<<"base class constructor"<<endl;
    }
};
class basecls1{
    public:basecls1(){
        cout<<"base class 1 constructor"<<endl;
    }
};
class derived_one:public basecls{
    public:void display(){
        cout<<"derived class constructor"<<endl;
    }
};
class derived_two:public basecls1{
    public:void show(){
        cout<<"derived class 2 constructor"<<endl;
    }
};
int main(){
    derived_one d1;
    derived_two d2;
    d1.display();
    d2.show();
}
