#include <iostream>

using namespace std;

int main()
{
    int x=0,n=0;
    double e=0;
    cout<<"please enter an jingdu ";
    cin>>n;
    while(n)
    {
        int jie=1;
        x=n-1;

        while(x)
        jie=jie*x--;
        e+=1.0/jie;
  n--;
    }

    cout<<e;
    return 0;
}

