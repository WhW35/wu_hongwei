#include <iostream>

using namespace std;

int main()
{
    int m=0,average,counter=0;
    for (int n=0;n!=9999;counter+=1)
        m=m+n,cin>>n;
        average=m/(counter-1);

    cout<<"average is "<<average<<endl;
}
