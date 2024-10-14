#include <iostream>
using namespace std;

bool great(int a,int b);

int main()
{
    int n1,n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << great(n1,n2);
    return 0;
}

bool great(int a, int b)
{
    return (a>b);
}