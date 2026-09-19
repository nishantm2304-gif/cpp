#include<iostream>
using namespace std;
class test{
    public:int a;
    public:void seta(int a){
        this->a=a;

    }
    public:void geta(){
        cout<<"value of a=="<<a<<endl;
    }
};
int main(){
    test t;
    t.seta(60);
    t.geta();
}