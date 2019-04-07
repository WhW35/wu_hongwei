#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t=0,n=1,x=0,m=0;
    double e=0;
    cout<<"please enter an jingdu ";
    cin>>n;
    cout<<"please enter an x";
    cin>>x;
    while(n)
    {
        int jie=1;
        t=n-1;
        m=n-1;
        while(t)
        jie=jie*t--;
        e+=pow(x,m)/jie;
  n--;
    }

    cout<<e;
    return 0;
}
