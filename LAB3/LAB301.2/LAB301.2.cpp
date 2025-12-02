// LAB301.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include  <iostream>
#include  <string> 
using namespace std;

int main()
{
	string studentID;
	string Name;
	int score;
	char Grad;

	cout << "Enter studentID:" << endl;
	cin >> studentID;
	cin.ignore();
	cout << "Enter studentName:" << endl;
	getline(cin , Name);
	cout << "Enter score:" << endl;
	cin >> score;
	

	if (score >= 80) {
      Grad = 'A';
	}
	else if (score >= 70) {
		Grad = 'B';
	}
	else if (score >= 60) {
		Grad = 'C';
	}
	else if (score >= 50) {
		Grad = 'D';
	}
	else {
		Grad = 'F';
	}
	
	cout << "        information         " << endl;
	cout << "Enter studentID:"<< studentID << endl;
	cout << "Enter studentName:" << Name << endl;
	cout << "Enter score:" << score << endl;
	cout << "Enter score:" <<Grad << endl;
	cout << "                            " << endl;
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
