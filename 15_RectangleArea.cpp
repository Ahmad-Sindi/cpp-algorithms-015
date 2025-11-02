// Algorithm Challenge
// 15 — Rectangle Area

#include <iostream>
using namespace std;

int main()
{
    int length, width, area;

    // Ask the user to input rectangle dimensions
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate the area (Area = length * width)
    area = length * width;

    // Display the result
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
