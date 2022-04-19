#include <string>
#include <iostream>
using namespace std;

int main()
{
    string ln,fn,mi;
    cout<<"Enter Input: ";
    cin>>ln;
    cin>>fn;
    cin>>mi;
    cout<<"Output: ";
    cout<<mi<<", "<<ln<<" ";
    cout<<fn.c_str()[0]<<"."<<endl;
    return 0;
}
