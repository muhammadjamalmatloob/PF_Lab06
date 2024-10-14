#include <iostream>
using namespace std;

bool parity_analysis(int n);

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << parity_analysis(a);
    return 0;
}

bool parity_analysis(int n)
{
    return ((n%2 == 0 && (n%10 + (n/10)%10 + (n/100)%10)%2 == 0) || (n%2 != 0 && (n%10 + (n/10)%10 + (n/100)%10)%2 != 0));
}
