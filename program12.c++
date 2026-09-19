#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
    cout<<"count of arguments: "<<argc<<endl;
    cout<<"name of file: "<<argv[0]<<endl;
    cout<<"list of arguments: "<<endl;
    for(int i=0;i<argc;i++)
    {
        cout<<"i=="<<argv[i]<<endl;
    }
    return 0;

}
