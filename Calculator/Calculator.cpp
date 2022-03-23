// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
//need to finish adding the rest of the logic
auto sum(float nums[]) {
	float output = 0;
	for (int i = 0; i < sizeof(nums); i++) {
		output += nums[i];

	}


	return output;
}

auto subtract(int nums[]) {
	int output = nums[0];

	for (int i = 1; i < sizeof(nums); i++) {
		output -= nums[i];

	}
	return output;
}
float calculate(char inEquation) {

	string inNums[64];
	float fullNum[64];
	float output = 0;

	try {
		for (int i = 0; i < 64; i++) {

			cout << "Please enter a number, enter '*' to exit" << endl;
			cin >> inNums[i];
			if (inNums[i] == "*") {
				break;
			}
			else  {
				if ((isdigit(stoi(inNums[i]))) == false) { //logic not working, need to fix

					throw exception("Invalid");
					break;
				}
				else {
					fullNum[i] = (float) stoi(inNums[i]);
				}

			}

		}

		switch (inEquation)
		{
		case 'a':
			sum(fullNum);
			break;
		case's':
			break;
		case 'm':
			break;
		case 'd':
			break;
		case '%':
			break;
		}

	}
	catch (exception e) {
		cout << "Error adding number, plz try again.\n" << endl;

	}
	

	return 0;
}


int main()
{
	//Insert equation
	string inEquation;
	char calcType;

	//get input on type of equation
	//switch based on equation type
	cout << "Calculation Types:\n"
		<< "Addition: (+)\nSubtraction: (-)\nMultiplication: (*)\nDivision: (/)\nModolo: (M%)\n" << endl;
	cout << "Please enter the type of equation you'd like: " << endl;
	cin >> calcType;
	try {
		switch (calcType) {
		case 'a': case 'A': case '+':
			calcType = 'a';
			calculate(calcType);
			break;
		case 's': case 'S': case '-':
			calcType = 's';
			calculate(calcType);
			break;
		case 'm': case 'M': case '*':
			calcType = 'm';
			calculate(calcType);
			break;
		case 'd': case 'D': case '/':
			calcType = 'd';
			calculate(calcType);
			break;
		case '%':
			calculate(calcType);
			break;
		default:
			cout << "That does not exist." << endl;
			break;
		}
	}
	catch (exception calcType) {

	}


}