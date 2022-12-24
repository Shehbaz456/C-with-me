#include<iostream>
using namespace std;

class Base{
    int data1; //Private by default and is not inheritable
    public:
        int data2;
        void SetData();
        int getData1();
        int getData2();

};

void Base::SetData(void){
    data1 =10;
    data2 =20;
}

int Base::getData1(){
    return data1;
}

int Base::getData2(){
    return data2;
}
 


class Derive:public Base{ //class is being Derived publically
    int data3;
    public:
        void process();
        void Display();
};

void Derive::process(){
    data3 = data2* getData1(); 
}
void Derive::Display(){
    cout<<"this is Data 1 "<<getData1()<<endl;
    cout<<"this is Data 2 "<<data2<<endl;
    cout<<"this is Data 3 "<<data3<<endl;
}


int main(){
    Derive der;
    der.SetData();
    der.process();
    der.Display();

    // der.getData1(); 
    return 0;
}