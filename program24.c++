#include<iostream>
using namespace std;
class employee{
    public:int id;
    public:static int sum;
    public:void set_data(void){
        cout<<"enter value of id"<<endl;
        cin>>id;
        sum++;

    }
    public:void get_data(void){
        cout<<"your id is"<<id<<endl
        <<"cout is="<<sum;
    }
};
int employee::sum=1000;
int main(){
    employee e1,e2,e3;
    e1.set_data();
    e1.set_data();
    e2.get_data();
    e2.get_data();
    e3.set_data();
    e3.get_data();

}