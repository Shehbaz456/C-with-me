#include<iostream>
using namespace std;

// function prototype
// int sum(int a,int b);
int sum(int ,int);
void g(void);
int main(){
    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;

    cout<<"the Sum is "<<sum(num1,num2);
    g();
    return 0;
}
int sum(int a,int b){
    return a+b;
}
void g(){
    cout<<"\nthis is massage of void function";
}


