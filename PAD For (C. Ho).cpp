// This project classifies a number as perfect, abundant, or deficient. It demonstrates:
//		validating user input with while loops (This classification only has meaning for POSITIVE 
// integers) and
//		using for loops for the processing phase.
// Instruction file: https://bhcc.digication.com/cit120all_master_delta/PAD_for_lab
// Title: PAD
// Programmer: C. Ho
// Last Modified: Wed., Nov. 8, 2023 @ 4:38 PM

// PREPROCESSOR DIRECTIVE SECTION
#include <iostream>
using namespace std;

// FUNCTION DECLARATION SECTION - N/A IN THIS LAB

// MAIN SECTION
int main()
{
	// SET UP SECTION
	// System function call to modify title bar
	system("title Classify a POSITIVE number as Perfect, Abundant or Deficient");
	// System function call to modify color of cmp window
	system("color E1");

	// WYSIWYG banner
	cout << "\n"
		<< "\t\t Positive number classification as \n"
		<< "\t\t  perfect, abundant, or deficient  \n"
		<< "\t\t             By C. Ho              \n\n";

	// VARIABLE DECLARATION SECTION
	int
		givenNumber,
		potentialDivisor = 1,
		sumOfDivisors = 0;

	// INPUT SECTION
	// Force an infinite loop to run program forever
	while (true) {
		// Prompt user for a number to classify.
		cout << "Enter a number to be classified as perfect, abundant, or deficient: ";
		
		// Get user input.
		cin >> givenNumber;
		cin.ignore(100, '\n');

		// Validate that user input is a positive number.
		while (givenNumber <= 0)
		{
			cout << "This classification is for POSITIVE integers only. Please try again: ";
			cin >> givenNumber;
			cin.ignore(100, '\n');
		}

		// PROCESSING SECTION  
		// Find divisors of givenNumber
		for (potentialDivisor = 1; potentialDivisor < givenNumber; potentialDivisor++)
			if (givenNumber % potentialDivisor == 0)
				// sumOfDivisors = sum of divisors
				sumOfDivisors += potentialDivisor;

		// OUTPUT SECTION
		// Compare givenNumber to sumOfDivisors
		cout << "\t   " << givenNumber << " is ";
		if (givenNumber > sumOfDivisors)
			cout << "an ABUNDANT";
		else if (givenNumber == sumOfDivisors)
			cout << "a PERFECT";
		else
			cout << "a DEFICIENT";
		cout << " number.\n";

		// Print line of asterisks to demarcate iteration.
		cout << "    *********************************************************************\n\n";
	}
	
	// CLEAN UP SECTION
	system("pause");
	return 0;
// Main ends
}