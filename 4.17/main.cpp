#include <iostream>

using namespace std;

int main()
{
    int counter=1,largest=0;
    while (counter<=10)
    {
        cout<<"Enter number: ";
        int number=0;
        cin>>number;

        if (largest<number)
            largest=number;
        counter=counter+1;
    }
    cout<<"The largest is: "<<largest<<endl;
}
