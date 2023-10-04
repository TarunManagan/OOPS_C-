#include<iostream>
using namespace std;
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
int main(){
    double x;
    cube volume; //Instantiation of object volume
    x=volume.vol_cube();
    volume.print(x);
    return 0;
}

/*OUTPUT
Enter the height, breadth, and length of the cube: 4 5 6
The volume of the cube is: 120
*/
