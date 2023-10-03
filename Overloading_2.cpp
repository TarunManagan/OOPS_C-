#include<iostream>
using namespace std;

class multiple{
    public:
    int a, b, c, d;
    multiple(int a, int b){
        c = a+b;
    }
    multiple(float a, float b, float d){
        c = a-b-d;
    }
    multiple(int a ){
        c = a*a;
    }
    void display(){
        cout<<"Output is: "<<c<<endl;
    }
};
int main(){
    multiple a1(10, 20);
    multiple a2(12.2, 15.1, 11);
    multiple a3(9);

    a1.display();
    a2.display();
    a3.display();
}

/*OUTPUT
Output is: 30
Output is: -13
Output is: 81
*/
