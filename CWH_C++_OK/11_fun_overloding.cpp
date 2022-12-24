// Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading. 
#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,float c){
    return a+b+c;
}
int sum(int b,float c){
    return b+c;
}

int main(){
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3,6 and 7.6 is "<<sum(4,6,7.6)<<endl;
    // cout<<"the sum of 7 and 43 is "<<sum(7,43)<<endl;

    return 0;
}  
