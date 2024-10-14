#include <iostream>
#include <string>
using namespace std;

string pass_or_fail(int m);

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    cout << pass_or_fail(marks);
    return 0;
}

string pass_or_fail(int m)
{
    if (m >= 50 )
        return "You are passed with " + to_string(m) + " marks.";
    return "You are failed with " + to_string(m) + " marks.";
}