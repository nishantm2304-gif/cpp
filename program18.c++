#include<iostream>
using namespace std;
class demo{
    public:int a;
    public:int b;
    public:void set_data(int x,int y){
        a=x;
        b=y;
    }

    public:void get_data(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }

};

int main(){
    demo d1;
    d1.set_data(10,20);
    d1.get_data();
    return 0;
}
