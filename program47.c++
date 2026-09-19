#include<iostream>
using namespace std;
class student{
    public:int rollno;
    public:char name;
    public:void show(){
        cout<<"rollno="<<rollno<<endl;
        cout<<"name="<<name<<endl;
    }
};
int main(){
    student obj;
    student*ptr_obj;
    ptr_obj=&obj;
    ptr_obj->rollno=90;
    ptr_obj->name='t';
    ptr_obj->show();
}