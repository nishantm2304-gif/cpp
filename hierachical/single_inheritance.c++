#include<iostream>
using namespace std;
class base_class{
    public:void display(){
        cout<<"hello from base class"<<endl;
    }
};
class derived_class:public base_class{
    public:void show(){
        cout<<"hello from derived class"<<endl;
    }
};
int main(){
    derived_class obj;
    obj.display();
    obj.show();
    return 0;
}