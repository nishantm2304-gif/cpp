#include<iostream>
using namespace std;

void  fun(int *ptr){
    *ptr=20;
}
int main(){
    int x=10;
    cout<<x<<endl;
    fun(&x);
    cout<<x<<endl;
    return 0;
}