#include <iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1,int b1,int c1); //Declaration
        void getData(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};
void Employee:: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee harry;
    // harry.a = 34; gives error becouse a is private
    harry.d = 34;
    harry.e =99;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}


// OOPs - Classes and objects

// c++ --> initially called --> c with classes by Stroustroup
// class--> extension of Structures (in C )
// Structure had limitations
//     -- member are public
//     -- No methods
// classes --> structure + more 
// classes --> can have method and properties
// classes --> can make few member as private or public 
// Structure in C++ are typedefed
// you can declare object along with the class Declaration
    /*
    class employee{
        // class Definition
    }harry, rohan, lovish;
    */
// harry.salary = it makes No sence if Salary is private   

