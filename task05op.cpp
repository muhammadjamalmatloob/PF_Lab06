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
    float disc = 0;
    if (d == "Sunday")
        disc = 0.05;
        if (m == "October")
            disc = 0.1;
    payable = payable - payable*disc;
    return payable; 
}