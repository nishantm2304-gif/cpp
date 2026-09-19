#include<iostream>
using namespace std;
class copy_constructor
{
    public:int a, b;
    public: copy_constructor(int x,int y)
    {
        a = x;
        b = y;
    }
    public: copy_constructor(const copy_constructor &obj)
    {
        a = obj.a;
        b = obj.b;
    }
    public: void display()
    {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }
};
int main(){
    copy_constructor obj1(10,20);
    copy_constructor obj2 (obj1);
    obj1.display();
    obj2.display();
    return 0;
}