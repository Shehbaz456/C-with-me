#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a=0;
        }
        Number(int num){
            a=num;
        }
    // when no copy constructor is found, compiler supplies its own copy constructor 
        Number(Number &obj){
            cout<<"copy constructor Called !!!!"<<endl;
            a=obj.a;
        }
        void Display(){
            cout<<"the number of this object is "<<a<<endl;
        }
};
int main(){
    Number x,y,z(45),z2;
    x.Display();
    y.Display();
    z.Display();

    Number z1(z);  // copy constructor invoked 
    z1.Display();

    // z2=z  //copy constructor not called 
    Number z3=z;  //copy constructor not called 
    z3.Display();

    // z1 should exactly resemble z  or x or y
    return 0;
}