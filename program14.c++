#include<iostream>
using namespace std;

void  add(){
    cout<<"defult function"<<endl;
}
void add(int a,int b){
    cout<<"two peramiter function "<<a+b<<endl;
}
void add(int a,int b,int c){
    cout<<"three peramiter function "<<a+b+c<<endl;
}
int main(){
    add();
    add(10,20);
    add(10,20,30);
    return 0;
}