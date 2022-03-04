#include <iostream>

using namespace std;

struct Student {
    int roll;
    string name;
    float marks;

    void setStudentData(int _roll, string _name, float _marks) {
        *&roll = _roll;
        *&name = _name;
        *&marks = _marks;
    }

    void getStudentData() {
        cout << "Roll no: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s[3];
    int roll;
    float marks;
    string name;
    for (auto &i: s) {
        cout << "Enter roll no: " << endl;
        cin >> roll;

        cout << "Enter name: " << endl;
        cin >> name;

        cout << "Enter marks: " << endl;
        cin >> marks;

        i.setStudentData(roll, name, marks);
    }
    cout << endl << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Student " << i + 1 << ":" << endl;
        s[i].getStudentData();
        cout << endl;
    }

}