#include<iostream>
using namespace std;

int main()
{
    // int x,y,z;
    // z=1;
    // for (x=1;x<=4;x++)
    // {
    //   for(y=1;y<=6;y++)
    //   {
    //     cout<<(char)(64+y);
    //   }
    //   cout<<endl;
    // }

    int x,y;
    for(x=1;x<=5;x++)
    {
        for (y=1;y<=x;y++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
}
