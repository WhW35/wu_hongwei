#include <iostream>

using namespace std;

int main()
{
    int n;
    int x=1;
    cin>>n;

    if (n==1||n==0)
        cout<<"n!=1"<<endl;

    while(n>1)
    {
        x=x*n;
        n=n-1;

     }
    cout<<"n!= "<<x<<endl;

}

