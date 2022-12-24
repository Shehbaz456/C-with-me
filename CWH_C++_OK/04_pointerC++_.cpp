#include<iostream>

using namespace std;
int main(){
    // what is pointer ----> data type which holds the address of other data types

    int a=5;
    int *b = &a;
    // & --->Address of operator
    cout<<"Address of a is : "<<b<<endl; 
    cout<<"Address of a is : "<<&a<<endl;
    // * --->dereference operator  
    cout<<"value of a is : "<<*b<<endl; 


    int **c=&b;
    cout<<"the address of b is : "<<&b<<endl;
    cout<<"the address of b is : "<<c<<endl;
    cout<<"the value at address c is : "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is : "<<**c<<endl;
 

    return 0;
}

// vi 12
// ti 1.22 