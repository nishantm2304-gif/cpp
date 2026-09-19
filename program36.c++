#include <iostream>

using namespace std;
class binary_example{
    public:int a;
    public:binary_example(){}
    public:binary_example(int x){
        a=x;

    }
    public:void show(){
        cout<<"addition of object"<<a<<endl;
    }
    binary_example operator+ (binary_example o1){
        //z(temp)=a(data_member)+b(object as agument);
        binary_example temp;
        temp.a=a+o1.a;
        return temp;
    }
};
int main() {
    binary_example obj(50);
    binary_example obj1(80);
    binary_example obj2;
    obj2=obj1+obj;
    obj2.show();
    return 0;
   
}
