#include <iostream>
using namespace std;

float discount(string d,string m,float amount);

int main()
{
    float amount;
    string d,m;
    cout << "Enter purchase day: ";
    cin >> d;
    cout << "Enter purchase month: ";
    cin >> m;
    cout << "Enter purchase amount : ";
    cin >> amount;
    cout << "Payable amount after discount: " << discount(d,m,amount);
    return 0;
}

float discount(string d,string m,float amount)
{
    float payable = amount;
    if (d == "Sunday" || m == "October")
        payable = payable - payable*0.1;
    return payable; 
}