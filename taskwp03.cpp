#include <iostream>
using namespace std;

char assign_grade(int marks);

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Grade: " << assign_grade(marks);
}

char assign_grade(int marks)
{
    if (marks < 50)
        return 'F';
    if (marks >= 50 && marks <=60)
        return 'E';
    if (marks > 60 && marks <=70) 
        return 'D';
    if (marks > 70 && marks <= 80)
        return 'C';
    if (marks > 80 && marks <= 85)
        return 'B';
    if (marks > 85)
        return 'A';
}