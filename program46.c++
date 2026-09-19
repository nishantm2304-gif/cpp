#include<iostream>
using namespace std;
class first{
    public:char s2;
    public:first (char x){
        s2=x;

    }
    public:void display(){
        cout<<"class first"<<s2<<endl;
    }
};
class second{
    public:char s1;
    public:second(char y){
        s1=y;
    }
    public:void show(){
        cout<<"class second"<<s1<<endl;
    }
    second(first f1){
        s1=f1.s2;
    }
};
int main(){
    first o1('y');
    second o2=o1;
    o1.display();
    o2.show();
}
