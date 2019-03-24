#include <iostream>
#include "Emloyee.h"
#include <string>

using namespace std;

int main()
{
int n=0,s=0;
cout<<"请输入月薪 ";
cin>>n;
Emloyee emloyee("三","张",n);
emloyee.displaymessage1() ;
cout<<"\n按4查询提升10%的年薪";
cin>>s;
if(s=4);
emloyee.displaymessage2();

    return 0;
}
