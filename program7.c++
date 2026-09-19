#include<iostream>
using namespace std;
int main(){
    int *a = new int;
    *a = 10;
    cout<<"address of a: "<<a<<endl;
    cout<<"value of a: "<<*a<<endl;
    return 0;
}
