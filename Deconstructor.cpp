#include<iostream>
using namespace std;

class construct{
    public:
    int sum;
    construct(int m, int n){ //Deconstructor
        sum = m+n;
    }
    void display(){
        cout<<"Sum is: "<<sum;
    }
};

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    construct c(a,b); //Instantiation
    c.display();
    return 0;
}

/*OUTPUT
Enter two numbers: 2 4
Sum is: 6
*/
