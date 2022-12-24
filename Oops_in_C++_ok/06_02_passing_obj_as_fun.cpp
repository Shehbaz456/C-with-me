#include<iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;
    public:
    void setData(int v1,int v2){
        a=v1;
        b=v2;
    }
    void Complex_num_Sum(complex o1,complex o2){
        a =o1.a+o2.a;
        b =o1.b+o2.b;
    }
    void Complex_num_Subtra(complex o1,complex o2){
        a =o1.a-o2.a;
        b =o1.b-o2.b;
    }

    void printNumber(){
        cout<<"your complex number is:  "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    complex c1,c2,c3;
    c1.setData(10,20);
    c1.printNumber();

    c2.setData(5,15);
    c2.printNumber();
    printf("\n");

    printf("Add two complex number: \n");
    c3.Complex_num_Sum(c1,c2);
    c3.printNumber();
    printf("Subtract two complex num: \n");
    c3.Complex_num_Subtra(c1,c2);
    c3.printNumber();
    return 0;
}

