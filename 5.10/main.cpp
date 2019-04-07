#include <iostream>

using namespace std;

int main()
{    int x=1,y=1,z=1,o=1,p=1;
     int number1=1,number2=1,number3=1,number4=1,number5=1;
    for( int n=1;n>0;n--)
        {number1=number1*x;x++;}
        cout<<"1!= "<<number1<<endl;
     for( int m=2;m>0;m--)
        {number2=number2*y;y++;}
        cout<<"2!= "<<number2<<endl;
        for( int l=3;l>0;l--)
        {number3=number3*z;z++;}
        cout<<"3!= "<<number3<<endl;
        for( int q=4;q>0;q--)
        {number4=number4*o;o++;}
        cout<<"4!= "<<number4<<endl;
        for( int r=5;r>0;r--)
        {number5=number5*p;p++;}
        cout<<"5!="<<number5<<endl;
    return 0;
}
