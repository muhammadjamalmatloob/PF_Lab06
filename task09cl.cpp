#include <iostream>
using namespace std;

string check_title(int age, char gender);

int main()
{
    int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender: ";
    cin >> gender;
    cout << check_title(age,gender);
}

string check_title(int age, char gender)
{
    if (gender == 'm')
    {
        if (age >= 16)
            return "Mr.";
        return "Master";
    }
    else if (gender == 'f')
    {
        if (age >= 16)
            return "Ms.";
        return "Miss";
    }
}
