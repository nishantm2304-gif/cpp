#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;
int main(){
    int a=10;
    cout<<"before setw "<<a<<endl;
    cout<<"after setw "<<setw(10)<<endl;
    cout<<a;
    return 0;

}