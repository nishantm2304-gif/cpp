#include<iostream>
using namespace std;
class const_default
{
    public:
    const_default()
    {
        cout<<"Default constructor called"<<endl;
    }
    void display()
    {
        cout<<"Display function called"<<endl;
    }
};
int main(){
    const_default obj;
    obj.display();
    return 0;
}