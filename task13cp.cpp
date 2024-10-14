#include <iostream>
using namespace std;

float lowestprice(int km,string period);

int main()
{
    int km;
    string period;
    cout << "Enter the number of kilometers: ";
    cin >> km;
    cout << "Enter period of the day(day/night): ";
    cin >> period;
    cout << "Lowest price for " << km << " kilometers: " << lowestprice(km,period) << " EUR"; 
    return 0;
}

float lowestprice(int km,string period)
{
    if (km >= 100)
        return km*0.06;
    else if (km >= 20)
        return km*0.09;
    else
        if (period == "day")
            return 0.7 + km*0.79;
        else if (period == "night")
            return 0.7 + km*0.9;
}