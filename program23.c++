#include<iostream>
using namespace std;
class array_inclass{
    public:int arr[5];
    public:void set_array()
    {
        cout<<"enter array value";
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
    public:void get_array(){
        cout<<"value of array";
        for(int i=0;i<5;i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    array_inclass a1;
    a1.set_array();
    a1.get_array();
}