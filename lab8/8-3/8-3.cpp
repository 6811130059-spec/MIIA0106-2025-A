// 8-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
struct Student {
	// TODO
	string id;
	string Nickname;
	string lineId;
	string phone;
};
// TODO: ????????????????
void printStudent(Student s) {
	// TODO
	cout << "\n=== Output Student 1 ===\n";
	cout << "ID \tNickname \tLineId \tPhont \n";
	cout << s.id << "\t" << s.Nickname << "\t" << s.lineId << "\t" << s.phone << "\n";
}
int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	cout << "Enter of id ";
	cin >> s1.id;

	cout << "Enter of Nickname: ";
	cin >> s1.Nickname;

	cout << "Enter of lineID : ";
	cin >> s1.lineId;

	cout << "Enter of phone: ";
	cin >> s1.phone;
	cout << "\n=== Output (from function) ===\n";
	// TODO: ????? printStudent
	printStudent(s1);
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
