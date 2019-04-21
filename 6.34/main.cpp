#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int m,x;
    int n=1+rand()%1000;
    cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess."<<endl;
    cin>>m;
    if (m==n)
        cout<<"Excellent!You guessed the number!"
        <<"\nWould you like to play again (y or n)?"<<endl;
    while (m!=n)
    {
        if(m<n)
        {
            cout<<"Too low.Try again."<<endl;
            cin>>m;
        }
        if(m>n)
        {
            cout<<"Too high.Try again."<<endl;
            cin>>m;
        }
    }
}
