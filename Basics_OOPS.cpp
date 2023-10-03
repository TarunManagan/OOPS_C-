#include <iostream>
using namespace std;

class Student {
    int PRN,year;
    string name;
public:
    Student();
    void display() {
        cout << "\nName: " << name<< "\nPRN " << PRN << "\nYear: " << year << endl;
    }
};
Student::Student() {
    cout << "\nEnter your name: ";
    cin >> name;
    cout << "Enter your PRN and year: ";
    cin >> PRN>>year;
}
int main() {
    Student s1;
    s1.display();
    return 0;
}

/*OUPUT
Enter your name: Tarun
Enter your PRN and year: 118 2
Name: Tarun
PRN 118
Year: 2
*/
