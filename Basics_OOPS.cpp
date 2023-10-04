#include<iostream>
using namespace std;

class Student{ //Creation of class
    int rollno;
    int year;
    string name;
public: //PUBLIC allows to access the elements of class even outside the class
    Student(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your roll no.: ";
        cin>>rollno;
        cout<<"Enter your year: ";
        cin>>year;
    }
    void display(){
        cout<<"Name: "<<name<<endl<<"Roll_No: "<<rollno<<endl<<"Year: "<<year;
    }
};
int main(){
    Student s1; //Instantiation of object s1
    s1.display();
    return 0;
}

/*OUPUT
Enter your name: Tarun
Enter your roll no.: 118
Enter your year: 2022
Name: Tarun
Roll_No: 118
Year: 2022
*/
