#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int &b=a;
    cout<<a<<endl;
    cout<<b<<endl;
    b=50;
    cout<<b<<endl;
    
}