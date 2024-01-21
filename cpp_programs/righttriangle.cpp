// File:   righttriangle.cpp
// Author: Gregory K. Bowne
// Date:   20 Oct 2023
// Time:   23:39:08
// Brief:  This program calculates the 

#include <iostream>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

#define PI 3.141592653589793

int main()
{
    double xLength;
    double yLength;
    double zLength;
    double aAngle;
    double bAngle;
    double cAngle = 90;

    // Draw a pretty picture (helps the user to better understand what they are entering)
    cout << "  |* ";
    cout << "\n  |   * ";
    cout << "\n  | B    *       Z";
    cout << "\n  |         * ";
    cout << "\nX |            * ";
    cout << "\n  |               * ";
    cout << "\n  | 90           A   * ";
    cout << "\n  |_____________________* ";
    cout << "\n             Y \n\n";

	// Get the Length of "x".
	cout << "Enter the length of the first side (x) adjacent to the right angle in mm: ";
	cin >> xLength;
	cout << "You entered " << xLength << " mm." << endl;

	// Clear the input buffer
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Get the Length of "y".
	cout << "Enter the length of the second side (y) adjacent to the right angle in mm: ";
	cin >> yLength;
	cout << "You entered " << yLength << " mm." << endl;;

    // Calculate the Hypotenuse
    zLength = sqrt(xLength * xLength + yLength * yLength);
    cout << "Hypotenuse = " << zLength << endl;

    // Calculate angles
    // Calculate Angle 'a'
    aAngle = atan(yLength / xLength) * 180 / PI;
    cout << "The angle of angle 'a' is: " << aAngle << " degrees" << endl;

    // Calculate angle 'b'
    bAngle = 90 - aAngle;
    cout << "The angle of angle 'b' is: " << bAngle << " degrees" << endl;

    return 0;
}