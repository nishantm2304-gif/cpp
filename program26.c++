#include<iostream> 
using namespace std; 

class constra_pera{ 
    public:
    int a; 

   
    constra_pera(int x) { 
        a = x; 
       
        cout << "A==" << a << endl; 
    } 
}; 

int main() { 
    constra_pera obj(10); 
    return 0;
}
