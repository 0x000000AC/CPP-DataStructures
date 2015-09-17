/*****************************************************************************
* Filename: stringProg.cpp
* 
* Description: 
*	
*	Main Method
*		1. Declare a string called myString
*		2. Use Call-by-referece pass your string to a method called inputData();
*		3. Use Call-by-value and pass your string to a method called outputData();
*
*	inputDataMethod
*		1. Get input using cin >> into the string variable you recieved into this 
*		method.  Ex: Last, First, Middle
*		2. Using the string methods mentioned in this weeks lecture, have your 
*		program change the string to: First Middle Last
*		3. Break the string into 3 separate variables first, last, middle
*		(Hint: use find() to find the ',' and spaces and substr() to extract
*		the pieces
*		4. Use string concatenation to reassemble the string and overwrite the
*		string you recieved with the new value.
*		5.  You must use each of the following string methods at least once
*		substr(), length(), find(), insert(), erase()
*
*	outputData Method
*		1. Output the new string to the screen using cout <<.
*	
*	Comments are required, but pseudocode or flowchart are not.
*	All Input/Output should be done using the C++ standard string class
*	Include: system("PAUSE"); after your output to the screen
*
* Expected Ouptut:
*	Please type your name.  Ex: Last, First Middle.: Clark, Aaron Paul.
*
*   Aaron P Clark.
*	Press any key to continue...
*
*
* Note:
*  There isn't any input validation here as the assignment didn't call for it
*  If you put garbage in, you'll get garbage out.
*
* 
* Author: Aaron P. Clark
* Email: aaron.clark@park.edu
* Date: 6/7/2014
* Last Change: 6/8/2014 
******************************************************************************/

#include <iostream>
#include <string>

using namespace std;


string inputData(string& first, string& middle, string& last)

{

	first = first;

	last = last;

	middle = middle.substr(0, 1);

	return first, last, middle;

} 

void outputData(string first, string middle, string last)
{
	string finalNameOutput;
	int finalNameLength;

	first = first;
	middle = middle;
	last = last;

	finalNameOutput = first + " " + middle + " " + last;
	finalNameLength = finalNameOutput.length();
	finalNameOutput = finalNameOutput.insert(finalNameLength, ".");
	cout << "\n" << finalNameOutput << endl;
}

int main()
{
	// Initialization of string and indeces variables
	string myString, last, first, middle;
	int firstSpaceIndex, commaIndex, lastSpaceIndex, myStringLength, firstNameSpaceIndex, 
		firstNameLength;	

	cout << "Please type your name.  Ex: Last, First Middle.:  ";

	getline(cin, myString);

	

	// Take the indeces of points that can be used as markers to pull susbtrings.

	firstSpaceIndex = myString.find(' ',0);  

	commaIndex = myString.find_first_of(',');

	lastSpaceIndex = myString.find_last_of(' ');

	myStringLength = myString.length();



	// Extract and milddle names using the comma index and length as "anchor points"

	last = myString.substr(0, commaIndex);

	middle = myString.substr(lastSpaceIndex + 1 , myStringLength);

	

	// Extract first name, must subtract length from final space index for full lenght of first name

	first = myString.substr(firstSpaceIndex + 1, lastSpaceIndex);

	firstNameSpaceIndex = first.find_first_of(' ');

	firstNameLength = first.length();

	first.erase(firstNameSpaceIndex, firstNameLength - firstNameSpaceIndex);

	

	// Call methods by reference, return them, pass them to outputData for display.

	inputData(first, middle, last);

	outputData(first, middle, last);



	system("PAUSE");

}