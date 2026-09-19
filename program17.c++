#include<iostream>
using namespace std;
class first{
    public:int a;
    public:int b;
    public:int multipliction(int x,int y,int z){
        return x*y*z;

    }
};
int main(){
    first f1;
    f1.a=10;
    f1.b=20;
    cout<<f1.a<<endl;
    cout<<f1.b<<endl;
    cout<<"function multipliction "<<f1.multipliction(10,20,30)<<endl;
    return 0;
}