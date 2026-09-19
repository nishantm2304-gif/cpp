#include<iostream>
using namespace std;
class type{
    public:char a;
    public:type(char x){
        a=x;

    }
    operator char(){
        return a;
    }
};
int main(){
    type obj='a';
    char var=obj;
    cout<<"class to basic:-"<<var;
}