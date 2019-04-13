 #include <iostream>

using namespace std;

int integerPower(int base,unsigned int exponent)
{
    int x=1;
    for (int n=1;n<=exponent;n++)
        x=x*base;
    return x;
}
// 6_18_H_INCLUDED
