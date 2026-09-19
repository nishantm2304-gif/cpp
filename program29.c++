#include<iostream>
using namespace std;
class explicit_constructor
{
    public:int a;
    public: explicit_constructor(int x)
    {
        a = x;
        cout<<"Value is: "<<a<<endl;
    }
};
int main(){
    explicit_constructor obj(10);
    obj=explicit_constructor(20);
    return 0;
}