#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact;
};

struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;
};

void inputStudent(Student& student) {
    cout << "===  (Input Data) ===" << endl;
    cout << "1. Student Data" << endl;
    cout << "ID: ";
    cin >> student.id;
    cout << "Nickname: ";
    cin >> student.nickname;
    cout << "Line ID: ";
    cin >> student.lineId;

    cout << "\n2. Student's Contact Info" << endl;
    cout << "Mobile Number: ";
    cin >> student.myContact.mobile;
    cout << "Home Number: ";
    cin >> student.myContact.home;

    cout << "\n3. Parent Data" << endl;
    cout << "Parent's Name: ";
    cin >> student.myParent.name;
    cout << "Relationship: ";
    cin >> student.myParent.relationship;

    cout << "\n4. Parent's Contact Info" << endl;
    cout << "Parent's Mobile: ";
    cin >> student.myParent.contact.mobile;
    cout << "Parent's Home: ";
    cin >> student.myParent.contact.home;
}
    void printStudent(const Student & student) {
        cout << "\n---------------------------------" << endl;
        cout << "      Student  Information        " << endl;
        cout << "---------------------------------" << endl;

        cout << "Student ID: " << student.id << endl;
        cout << "Nickname:   " << student.nickname << endl;
        cout << "Line ID:    " << student.lineId << endl;

        cout << "My Mobile:  " << student.myContact.mobile << endl;
        cout << "My Home:    " << student.myContact.home << endl;

        cout << "Parent:     " << student.myParent.name << " (" << student.myParent.relationship << ")" << endl;

        cout << "Parent Tel: " << student.myParent.contact.mobile << endl;
    }
        int main() {
            Student student;
            inputStudent(student);
            printStudent(student);
            return 0;
        }