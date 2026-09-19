#include<iostream>
using namespace std;
class a{
    public:void display(){
        cout<<"one"<<endl;
    }
};
class b : virtual public a{
        public:void display1(){
            cout<<"two"<<endl;
        }
    };
class c:public b,public virtual a{
    public:void display2(){
        cout<<"three"<<endl;
    }
};
int main(){
    c obj;
    obj.display();
    obj.display1();
    obj.display2();
}