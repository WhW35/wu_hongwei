#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n=1,x=0,m=1;
    double ¦Ð=0;
 for(;m<=1000;m++)
   {
       for(;n<=m;n++)
    {x=pow(-1,n-1)*(2*n-1);
    ¦Ð+=4.0/x;}
    cout<<"¦Ð"<<"("<<m<<")"<<"is "<<¦Ð<<endl;}
    return 0;
}
