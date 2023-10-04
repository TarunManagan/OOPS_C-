#include <iostream>
using namespace std;
int count =0;
class destruct{
    public:
    destruct(){ //Destructor
        count++;
        cout<<"No. of objects created: "<<count<<endl;
    }
    ~destruct(){ //Destructor
        count--;
        cout<<"No. of objects created: "<<count<<endl;
    }
    };
    
int main(){
    destruct aa,bb,cc; //Instantiation
    return 0;
}

/*OUTPUT
No. of objects created: 1
No. of objects created: 2
No. of objects created: 3
No. of objects created: 2
No. of objects created: 1
No. of objects created: 0
*/
