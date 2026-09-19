#include <iostream>
using namespace std;

    int a=10;
    int main(){
    cout << "local A=" << a ;
    cout << "global A=" <<::a;
    return 0;
    }



