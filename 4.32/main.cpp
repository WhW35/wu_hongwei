#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if (a+b>c&&a-b<c)
        cout<<"可以表示"<<endl;
    else
        cout<<"不可以表示"<<endl;
}
