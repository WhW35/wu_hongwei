#include <iostream>

using namespace std;

int main()
{
    int counter=1,Max1=0,Max2=0;
    while (counter<=10)
    {
        cout<<"Enter number: ";
        int number=0;
        cin>>number;
        if (Max1<number&&Max1<Max2)
            Max1=number;
        if (Max2<number)
            Max2=number;

        counter=counter+1;
    }
    cout<<"Max1: "<<Max1<<endl;
    cout<<"Max2: "<<Max2<<endl;
}
