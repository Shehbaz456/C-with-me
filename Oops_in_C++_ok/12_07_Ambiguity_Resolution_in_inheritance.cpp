#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"how are you?"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"kaise ho?"<<endl;
    }
};

class Derived:public Base1,public Base2{
    int a;
    public:
    void greet(void){
        // Ambiguity Resolation
        Base1::greet();
    }
};


class B{
    public:
    void Say(){
        cout<<"Hello world"<<endl;
    }
};
 
class D: public B{
    int a;
    public:
    void Say(){
        cout<<"Hello world i am coder "<<endl;
    }
};

int main(){
    // Ambiguity 1
    // Base1 base1_obj;
    // Base2 base2_obj;
    // base1_obj.greet();
    // base2_obj.greet();
    // Derived d;
    // d.greet();

    // Ambiguity 2
    B b;
    b.Say();

    D d;
    d.Say();

    return 0;
}