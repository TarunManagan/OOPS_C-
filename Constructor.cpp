#include <iostream>
using namespace std;

class Student {
    int PRN,year;
    string name;
public:
    Student();
    void display() {
        cout << "Name: " << name << "\nPRN: " << PRN << "\nYear: " << year;
    }
};
Student::Student() { //Constructor
    cout << "\nEnter your name: ";
    cin >> name;
    cout << "Enter your PRN: ";
    cin >> PRN;
    cout << "Enter your year: ";
    cin >> year;
    
}
int main() {
    Student s1; //Instantiation of object s1
    s1.display();
    return 0;
}

/*OUPUT
Enter your name: Tarun
Enter your PRN: 22070123118
Enter your year: 2022
Name: Tarun
PRN: 22070123118
Year: 2022
*/
