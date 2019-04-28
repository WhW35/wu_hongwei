#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    array<float,5>grades;
    float n;
    cin>>n;
    grades[4]=n;
    cout<<"grades[4]="<<grades[4]<<endl;
}

