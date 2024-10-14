#include <iostream>
using namespace std;

string check_speed(float speed);

int main()
{
    float s;
    cout << "Enter speed: ";
    cin >> s;
    cout << check_speed(s);
}

string check_speed(float speed)
{
    if (speed <= 10)
    {
        return "slow";
    }
    else if (speed <= 50)
    {
        return "average";
    }
    else if (speed <= 150)
    {
        return "fast";
    }
    else if (speed <= 1000)
    {
        return "ultra fast";
    }
    else
    {
        return "extermely fast";
    }
}