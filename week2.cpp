//This program will convert degrees farenheight to degrees celsius
//Programmer: Desiree Rose
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double celsius, fahrenheit;

	//student information
	cout << "Student Name: Desiree Rose" << endl;
	cout << "Student ID:   900952044 \n";

	//Program explanation
	cout << "\nWelcome to the CtoF temperature conversion program" << endl;
	cout << "This program converts degrees celsius to degrees fahrenheit\n";

	//Ask for user to enter degrees celsius
	cout << "\nPlease enter the temperature value in degrees celsius (decimal number): ";
	cin >> celsius;

	//calculate fahrenheit
	fahrenheit = (celsius * 1.8) + 32;

	//display the calculated fahrenheit temperature with 1 decimal place
	cout << "The equivalent fahrenheit temperature is: ";
	cout << setprecision(1) << fixed;
	cout << setw(8) << fahrenheit << " degrees\n";

	//display user instruction to exit program
	cout << "\nPlease enter 'return' to exit" << endl;

	//freeze program 
	cin.ignore();
	cin.get();
	return 0;
}
