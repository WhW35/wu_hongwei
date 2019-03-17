#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int Max1;
    int Max2;
    int Max;
    int Min1;
    int Min2;
    int Min;

    cin>>a>>b>>c>>d>>e;
    Max1=a;
    if (b>a)
        Max1=b;

    Max2=c;
    if (d>c)
        Max2=d;
    if (e>d)
        Max2=e;
    if (Max1<Max2)
        Max=Max2;
    if (Max1>Max2)
        Max=Max1;

    Min1=a;
    if (b<a)
        Min1=b;

    Min2=c;
    if (d<c)
    Min2=d;
    if (e<d)
    Min2=e;
    if (Min1<Min2)
    Min=Min1;
    if (Min2<Min1)
        Min=Min2;

    cout<<"Largest is "<<Max<<endl;
    cout<<"Smallest is "<<Min<<endl;

}
