#include <iostream>

using namespace std;

int main()
{
    int a,n,total=0;
    cin>>a;
    for (int counter=1;counter<=a;counter+=1)
        cin>>n,total=total+n;


    cout<<"Sum is "<<total<<endl;



}
