#include<iostream>
using namespace std;
class shape{
    public:void shape_fun(){
        cout<<"this is shape class function"<<endl;
    }   
    class triangle{
        public:void triangle_fun(){
            cout<<"this is triangle class function"<<endl;
        }
    };
};
int main(){
        shape s1;
        s1.shape_fun();
        shape::triangle t1;
        t1.triangle_fun();
        return 0;
}
