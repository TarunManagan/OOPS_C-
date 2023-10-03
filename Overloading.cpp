#include<iostream>
using namespace std;

class overload{
    public:
    int a;
    overload(){
        a = 10;
    }
    overload(int x){
        a=x;
    }
    overload(overload &aa){
        a = aa.a;
    }
    void display(){
        cout<<"Display output: "<<a<<endl;
    }
};

int main(){
    overload a;
    overload aa;
    overload bb(20);
    overload cc(aa);

    aa.display();
    bb.display();
    cc.display();
}

/*OUTPUT
Display output: 10
Display output: 20
Display output: 10
*/
