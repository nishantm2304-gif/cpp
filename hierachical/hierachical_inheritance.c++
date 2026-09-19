#include<iostream>
using namespace std;
class base_class{
    private:int x;
    protected:int y;
    public:int z;
    public:void base_display(){
        x=60;
        cout<<"private data x="<<x<<endl;
    }
};
class derived_one:public base_class{
    public:void one_assigned(){
        y=70;
        z=20;
        cout<<"protected is y="<<y<<endl;
        cout<<"public is z="<<z<<endl;
    }
};
class derived_two:public base_class{
    public:void two_assigned(){
        y=500;
        z=600;
        cout<<y<<"=protected"<<endl;
        cout<<z<<"=public";

    }
};
int main(){
    derived_one b1;
    derived_two b2;
    b1.one_assigned();
    b2.two_assigned();

    // d1.baseclass();
    // d2.baseclass();

}