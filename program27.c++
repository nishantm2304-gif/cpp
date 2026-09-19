#include<iostream>
using namespace std;
class employee{
    public:
    static void add_stat(void){
        cout<<"Static function called"<<endl;
    }
    public:void normal_func(void){
        cout<<"Normal function called"<<endl;
    }
};
int main(){
    employee e1;
    e1.normal_func();
    e1.add_stat();
    return 0;
}
    