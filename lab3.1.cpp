////////////////////////////////////////////////////////////////
//
// Name: Arnulfo Salazar III
// Date: 09/24/2025
// Class: CSCI 1470.04
// Semester: Fall 2025
// Instructor: Dr. Jonatan Reyes
//
// Program Name: Angles and Conversions
// Program Description: Angles from a file are converted to radians and are computed to output sin cos and tan for each one
//
////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <cctype>
#include <cmath>
#include <iomanip>

using namespace std;

//function prototype
void printTable(int, int, int, int);

int main() {
	//reading file and creating angle variables
	ifstream angle("angle.txt");
	int ang1, ang2, ang3, ang4;
	angle >> ang1 >> ang2 >> ang3 >> ang4;
	
	//call function
	printTable(ang1, ang2, ang3, ang4);

	return 0;
}

//prints table with each angles sin, cos, and tan
void printTable(int ang1, int ang2, int ang3, int ang4) {
	double rad1, rad2, rad3, rad4;
	rad1 = ang1 * 3.1416 / 180.0;
	rad2 = ang2 * 3.1416 / 180.0;
	rad3 = ang3 * 3.1416 / 180.0;
	rad4 = ang4 * 3.1416 / 180.0;

	//formatting and math
	cout << right << setw(5) << "Angle" << right << setw(10) << "Sine" << setw(10) << "Cosine" << setw(10) << "Tangent" << endl;
	cout << right << setw(5) << ang1 << right << setw(10) << sin(rad1) << setw(10) << cos(rad1) << setw(10) << tan(rad1) << endl;
	cout << right << setw(5) << ang2 << right << setw(10) << sin(rad2) << setw(10) << cos(rad2) << setw(10) << tan(rad2) << endl;
	cout << right << setw(5) << ang3 << right << setw(10) << sin(rad3) << setw(10) << cos(rad3) << setw(10) << tan(rad3) << endl;
	cout << right << setw(5) << ang4 << right << setw(10) << sin(rad4) << setw(10) << cos(rad4) << setw(10) << tan(rad4) << endl;

}