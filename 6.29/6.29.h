#include<iostream>
#include<cmath>
int primenumber(int n)
{
    int i;
    for (i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return n;
}
// 6_29_H_INCLUDED
