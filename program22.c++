#include<iostream>
using namespace std;
class demo{
    public:int assign(int x, int y){
        return x+y;
    
    }
    public:void display(){
        cout<<assign(20,30);
    }
};
int main(){
    demo d1;
    d1.display();
    return 0;
}
