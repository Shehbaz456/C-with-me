#include<iostream>
using namespace std;
// call by reference using C++ refrence variable
// int & 
void swapreference(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
    // return a;
}

int main(){
    int x =4,y=5;
    // swapreference(x,y) =990;
    swapreference(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}

