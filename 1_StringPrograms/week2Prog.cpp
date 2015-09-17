/*****************************************************************************
* Filename: week2Prog.cpp
* 
* Description: 
*	
*
*	Main Method
*	Ask for input for numerous non-negative integers.
*	Using pass-by-reference, pass integer received into recursive function called sumDigits.
*	Receive result back from sumDigits and output result to screen.
*	Include: system("PAUSE"); after your output to pause the screen.
*	See example below.
*
*	sumDigits Function (Receives integer)
*	Recursively call sumDigits adding up the integers received.
*	Return result to main method for output.
*	If a single digit is received, just return it to the main method.
*
*	Example output 
*	Run 1:
*	Enter a nonnegative integer: 23
*	The sum of the digits of 23 is 5
*
*	Run 2:
*	Enter a nonnegative integer: 1234
*	The sum of the digits of 1234 is 10
*
*	Run 3:
*	Enter a nonnegative integer: 90513
*	The sum of the digits of 90513 is 18
*
*	Run 4:
*	Enter a nonnegative integer: 2147483647
*	The sum of the digits of 2147483647 is 46
*
*
* Note:
*  There isn't any input validation here as the assignment didn't call for it
*  If you put garbage in, you'll get garbage out.
*
* 
* Author: Aaron P. Clark
* Email: aaron.clark@park.edu
* Date: 6/9/2014
* Last Change: 6/9/2014 
******************************************************************************/
#include <iostream> 
using namespace std; 
 
int sumDigits(const int &inputInt)
{
	if(inputInt == 0 )
        return 0;    

	// Does not work for digit strings larger than 10 int's long
	// Since the assignment didn't specify that, I kept it at 10.
	return sumDigits(inputInt / 10) + inputInt % 10;
}

int main()
{
    int myInt; 
    cout << "Enter a non-negative integer: ";
    cin >> myInt; 
 
    int sum = myInt;
 
    sumDigits(myInt); 
    
    cout << "\nThe sum of the digits of " << sum << " is " << sumDigits(myInt) << endl;
    system("PAUSE");
 }
 
