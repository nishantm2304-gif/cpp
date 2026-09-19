#include<iostream>
using namespace std;
inline int cube (int x)
{
    return x*x*x;
}
int main(){
    cout<<"inline function "<<cube(5);
    return 0;
}
