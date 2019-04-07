#include <iostream>

using namespace std;

int main()
{
  for(unsigned int count=1;count<5;++count)
  {
      cout<<count<<" ";
  }
   for(unsigned int count2=6;count2<=10;++count2)
  {
      cout<<count2<<" ";
  }
  cout<<"\nUsed continue to skip printing 5"<<endl;
      return 0;
}
