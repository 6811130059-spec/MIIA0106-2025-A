// TODO: ??????? score, address ??? pointer
#include <iostream>
using namespace std;
int main() {
	int score = 50;
	int* ptr = &score;

	// TODO
	cout << score << endl;
	cout << *ptr << endl;

	cout << " address of score :" << &score << endl;
	cout << " valus of ptr :" << ptr << endl;
	cout << " address pf pointer ptr :" << &ptr << endl;

	return 0;
}