#include <iostream>
using namespace std;

float perimeter(char s, float v);

int main()
{
    float val;
    char shape;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    cout << "Enter the value: ";
    cin >> val;
    cout << "The perimeter is: " << perimeter(shape,val);
}

float perimeter(char s, float v)
{
    if ( s == 's')
        return v*4;
    else if ( s == 'c')
        return 6.28*v;
    else if ( s = 't')
        return 3*v;
    else if ( s = 'h')
        return 6*v;
}