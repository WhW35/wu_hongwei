#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int SIZE=5;
    unsigned int values[SIZE]={2,4,6,8,10};
    unsigned int *vPtr;
    cout<<"Element"<<setw(13)<<"Values"<<endl;
    for(size_t i=0;i<5;i++)
    {
        cout<<setw(7)<<i<<setw(13)<<values[i]<<endl;
    }
    vPtr=&values[0];
    vPtr=values;

    cout<<"Element"<<setw(13)<<"Values"<<endl;
    for(int n=0;n<5;n++)
    {
        cout<<setw(7)<<n<<setw(13)<<*(vPtr+n)<<endl;
    }
    cout<<"Element"<<setw(13)<<"Values"<<endl;
    for(int j=0;j<5;j++)
    {
        cout<<setw(7)<<j<<setw(13)<<vPtr[j]<<endl;
    }
    cout<<values[4]<<endl;
    cout<<*(values+4)<<endl;
    cout<<vPtr[4]<<endl;
    cout<<*(vPtr+4)<<endl;


}
