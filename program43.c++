#include<iostream>
using namespace std;
class first{
    public:first(){
        cout<<"first class"<<endl;
    }
};
class second{
    first f1;
    public:void show(){
        cout<<"second class"<<endl;
    }
};
int main(){
    second s1;
    s1.show();
}