#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // creating a Constructor
    // Constructor is a Special member function with same name as of the class.
    // it is used to initializ the objects of its class 
    //  It is automatically invoked whenever an object is created
    complex(void);     //constructor declaration
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
//--> this is a default constructor as it takes no parameters
complex::complex(void)      
{
    // a=10;
    // b=20;
    cin>>a;
    cin>>b;
    cout<<"hello world";
}

int main(){
    complex c;
    c.printNumber();
    return 0;
}


// Characteristics of constructor

// 1. it should be declared in the public Section of the class
// 2. They are automatically invoked whenever the object is created
// 3. They connot return value and Do not have return types
// 4. it can have default Arguments
// 5. We cannot refer to their address

