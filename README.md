# OOPS_C++
Object-oriented programming – As the name suggests uses objects in programming. 
Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc. in programming. 
The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

There are some basic concepts that act as the building blocks of OOPs i.e.

* Class
* Objects
* Encapsulation
* Abstraction
* Polymorphism
* Inheritance
* Dynamic Binding
* Message Passing

# Class:
* A Class is a user-defined data type that has data members and member functions.
* Data members are the data variables and member functions are the functions used to manipulate these variables
  together these data members and member functions define the properties and behavior of the objects in a Class.
* In the above example of class Car, the data member will be speed limit, mileage, etc and member functions can apply brakes, increase speed, etc.

# Object:
An Object is an identifiable entity with some characteristics and behavior. An Object is an instance of a Class. 
When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
* Syntax:
  --> ClassName ObjectName;

# EXPERIMENT NO: 1
AIM: Basic operation using class and object
Algorithm:

--> STEP 1: START
--> STEP 2: Create a class
   class Student{
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
--> STEP 3: Instantiation of object in main function
    int main(){
    Student s1;
    s1.display();
    return 0;
}
--> STEP 4: Print the output
--> STEP 5: STOP

OUTPUT
Enter your name: Tarun
Enter your roll no.: 118
Enter your year: 2022
Name: Tarun
Roll_No: 118
Year: 2022

# EXPERIMENT NO: 2
AIM: Find the volume of the cube using OOPS concept
Algorithm:

--> STEP 1: START
--> STEP 2: Create a class
   class cube{
        public: //Allows the access of the elements even outside the class
        double ht, breadth,len;
        double vol_cube(){
            cout<<"Enter the height, breadth, and length of the cube: ";
            cin>>ht>>breadth>>len;
            double volume1 = ht*breadth*len;
            return volume1;
        }
        void print(int vol){
             cout<<endl<<"The volume of the cube is: "<<vol;
        }
}; 
--> STEP 3: Instantiation of object in main function
   int main(){
    double x;
    cube volume; //Instantiation of object volume
    x=volume.vol_cube();
    volume.print(x);
    return 0;
}
--> STEP 4: Print the output
--> STEP 5: STOP


OUTPUT
Enter the height, breadth, and length of the cube: 4 5 6
The volume of the cube is: 120

# EXPERIMENT NO: 3
AIM: Find the volume of the cube using PRIVATE
Theory:
* Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.
* Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.
* Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

Algorithm:

--> STEP 1: START
--> STEP 2: Take input from the user and create a class
--> STEP 3:  
    class cube{
        private: //In case of PRIVATE the elements can be accessed only inside the class
        double ht, breadth,len;
        public:
        double vol_cube(){
            cout<<"Enter the height, breadth, and length of the cube: ";
            cin>>ht>>breadth>>len;
            double volume1 = ht*breadth*len;
            return volume1;
        }
        void print(int vol){
             cout<<endl<<"The volume of the cube is: "<<vol;
        }
};
--> STEP 5: Instantiation of object in main function
    int main(){
    double x;
    cube volume; //Instantiation of object volume
    x=volume.vol_cube();
    volume.print(x);
    return 0;
}
--> STEP 6: Print the output
--> STEP 7: STOP

OUTPUT
Enter the height, breadth, and length of the cube: 10 6 4
The volume of the cube is: 240

# EXPERIMENT NO: 4
AIM: Constructor
Theory: 
Constructor is a member function of a class, whose name is same as the class name.
• Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically when an object of the same class is created.
• Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that is why it is known as a constructor.
• Constructors do not return value, hence they do not have a return type.
a. Syntax for defining the constructor within the class

        <class-name>(list-of-parameters)
        {
                  //constructor definition
        }

b.    Syntax for defining the constructor outside the class

        <class-name>: :<class-name>(list-of-parameters)
        {
                //constructor definition
        }

Algorithm:

--> STEP 1: START
--> STEP 2: Take input from the user and create a class
--> STEP 3: Create a constructor
    Student::Student() { //Constructor
    cout << "\nEnter your name: ";
    cin >> name;
    cout << "Enter your PRN: ";
    cin >> PRN;
    cout << "Enter your year: ";
    cin >> year;
    
}
--> STEP 4: Instantiation of object in main function
    Student s1; //Instantiation of object s1
    s1.display();
    return 0;
--> STEP 5: Print the output
--> STEP 6: STOP

OUTPUT
Enter your name: Tarun
Enter your PRN: 22070123118
Enter your year: 2022
Name: Tarun
PRN: 22070123118
Year: 2022

# EXPERIMENT NO: 5
AIM: Destructor
Theory:
* A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor. 
* Destructor has the same name as their class name preceded by a tilde (~) symbol.
* It is not possible to define more than one destructor. 
* The destructor is only one way to destroy the object created by the constructor. Hence destructor cannot be overloaded.
* Destructor neither requires any argument nor returns any value.
* It is automatically called when an object goes out of scope. 
* Destructor releases memory space occupied by the objects created by the constructor.
* In destructor, objects are destroyed in the reverse of an object creation.
* The syntax for defining the destructor within the class:

~ <class-name>() {
    // some instructions
}

* The syntax for defining the destructor outside the class:

<class-name> :: ~<class-name>() {
    // some instructions
}

Algorithm:

--> STEP 1: START
--> STEP 2: Take input from the user and create a class
--> STEP 3: Create a destructor
    destruct(){ //Destructor
        count++;
        cout<<"No. of objects created: "<<count<<endl;
    }
    ~destruct(){ //Destructor
        count--;
        cout<<"No. of objects created: "<<count<<endl;
    }
--> STEP 4: Instantiation of object in main function
    int main(){
    destruct aa,bb,cc; //Instantiation
--> STEP 5: Print the output
--> STEP 6: STOP

OUTPUT
No. of objects created: 1
No. of objects created: 2
No. of objects created: 3
No. of objects created: 2
No. of objects created: 1
No. of objects created: 0

