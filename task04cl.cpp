#include <iostream>
using namespace std;

float find_greatest(float a, float b, float c);

int main()
{
    float a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    cout << "The greatest number among " << a << ", " << b << " and " << c << " is " << find_greatest(a,b,c);
    return 0;
}

float find_greatest(float a, float b, float c)
{
    float g = a;
    if (b > g)
        g = b;
    if (c > g)
        g = c;
    return g;
}