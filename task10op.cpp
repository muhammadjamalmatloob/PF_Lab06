#include <iostream>
using namespace std;

bool Same_num(float a,float b,float c);

int main ()
{
    float a,b,c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    cout << Same_num(a,b,c);
    return 0;
}

bool Same_num(float a,float b,float c)
{
    return (a==b && b==c);
}
