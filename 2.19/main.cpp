#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;

    int Sum=0;
    int Average=0;
    int Product=0;
    int Max;
    int Min;

    cout<<"Input three different integers: ";
    cin>>a>>b>>c;

    Sum=a+b+c;
    cout<<"Sum is "<<Sum<<endl;

    Average=(a+b+c)/3;
    cout<<"Average is "<<Average<<endl;

    Product=a*b*c;
    cout<<"Product is "<<Product<<endl;

    Min=c;
    if (a<c)
        Min=a;
    if (b<a)
        Min=b;
    cout<<"Smallest is "<<Min<<endl;

    Max=a;
    if (b>a)
    Max=b;
    if (c>b)
        Max=c;
    cout<<"Largest is "<<Max<<endl;
}
