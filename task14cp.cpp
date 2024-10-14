#include <iostream>
#include <string>
using namespace std;

string calculateCost(float budget,string category,int people);

int main ()
{
    float budget;
    string category;
    int people;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category(VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in the group: ";
    cin >> people;
    cout << calculateCost(budget,category,people);
    return 0;
}

string calculateCost(float budget,string category,int people)
{
    float spent;
    float t_price;
    if (people <= 4)
    {
        spent = budget*0.25;
    }
    else if (people <= 9)
    {
        spent = budget*0.4;
    }
    else if (people <= 24)
    {
        spent = budget*0.5;
    }
    else if (people <= 49)
    {
        spent = budget*0.6;
    }
    else if (people > 49)
    {
        spent = budget*0.75;       
    }
    if (category == "VIP")
    {
        t_price = 499.99;
    }
    else if (category == "Normal")
    {
        t_price = 249.99;
    }
    if (spent >= t_price*people)
    {
        return "Yes! You have " + to_string(spent - t_price*people) + " QR left";
    }
    else
    {
        return "Not enough money! You needed " + to_string(t_price*people - spent) + " QR";
    }
}