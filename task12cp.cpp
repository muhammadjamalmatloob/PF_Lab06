#include <iostream>
using namespace std;

float totalincome(string type,int r,int c);

int main ()
{
    string type;
    int r,c;
    cout << "Enter screening type(Premiere/Normal/Discount): ";
    cin >> type;
    cout << "Enter rows: ";
    cin >> r;
    cout << "Enter columns: ";
    cin >> c;
    cout << "Total income: " << totalincome(type,r,c);
    return 0;
}

float totalincome(string type,int r,int c)
{
    float result;
    if (type == "Premiere")
        result = r*c*12.0;
    else if (type == "Normal")
        result = r*c*7.5;
    else if (type == "Discount")
        result = r*c*5.0;
    return result;
}