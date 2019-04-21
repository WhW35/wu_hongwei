#include <iostream>
#include <cstdlib>
#include"6.33.h"

using namespace std;

int main()
{
    int a=0,b=0;
    for(int n=1;n<=100;n++)
    {
        if(flip()==1)
    {
        cout<<"Head"<<endl;
    a+=1;
    }
    else
        {
            cout<<"Tail"<<endl;
        b+=1;
        }
    }

    cout<<"H: "<<a<<endl;
    cout<<"T: "<<b<<endl;
}

