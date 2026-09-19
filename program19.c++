#include<iostream>
using namespace std;
int local(){
    class demo{
       public:void cls_fun(){
        cout<<"this is class function"<<endl;
       }
    };
    demo d1;
    d1.cls_fun();
    return 0;
}
int main(){
    local();
    return 0;
}