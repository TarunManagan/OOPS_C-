#include<iostream>
using namespace std;
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
int main(){
    double x;
    cube volume; //Instantiation of object volume
    x=volume.vol_cube();
    volume.print(x);
    return 0;
}

/*OUTPUT
Enter the height, breadth ,and length of the cube: 10 6 4
The volume of the cube is: 240
*/
