#include <iostream> 
using namespace std; 

int main() 
{ 
    int age1; 
    cout << "enter your age: "; 
    cin>>age1; 
    if(age1<18) 
    {
        cout<<"you are eligible for voting";
    }
    else 
    {
        cout<<"you are not eligible for voting";
    }
    return 0; 
}

