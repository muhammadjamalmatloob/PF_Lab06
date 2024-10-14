#include <iostream>
using namespace std;

string can_buy_dress(float cost, string brand);

int main()
{
    float cost;
    string brand;
    cout << "Enter the dress cost: $";
    cin >> cost;
    cout << "Enter brand: ";
    cin >> brand;
    cout << can_buy_dress(cost,brand);
    return 0;
}

string can_buy_dress(float cost, string brand)
{
    if (cost <= 1500)
    {
        if (brand == "MTG")
        {
            return "Congratulations! You can buy the dress.";
        }
    }
    return "Sorry!, the dress doesn't meets the criteria for purchase.";
}