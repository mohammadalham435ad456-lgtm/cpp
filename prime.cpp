#include <iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    for (x=2;x<=(n/2);x++)
    {
        if(n%x==0)
        break;
    }
    if(x>n/2)
    cout<<"Prime no.";
    else
    cout<<"not Prime no.";
}