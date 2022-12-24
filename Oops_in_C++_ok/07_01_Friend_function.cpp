
#include<iostream>
using namespace std;

class complex{
    int a,b;
public:
    void setNumber(int n1,int n2){
        a = n1;
        b = n2;
    }

    friend complex sumComplex(complex o1,complex o2);
    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumComplex(complex o1,complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    complex c1,c2,sum; 
    c1.setNumber(1,4);
    c1.printNumber();
    
    c2.setNumber(5,8);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0; 
}

  


/*

properties of friend function

1. Not in the Scope of class
2. Since it is not in the scope of the class , it connot be called form the object of that class.
//  c1.sumComplex() == Invalid

3. can be invoked without the help of any object 
4. Usually contact the objects as argument  
5. can be declared inside public or private section of the class
6. it cannot access the member directly by their name and need object_name.member_name to access any member.


*/