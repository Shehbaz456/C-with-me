#include<iostream>
#include"this.h"
// user defined header file: it is writen by programmer
// #include"this.h" this will produce an error if this.h is no present in the current directory

using namespace std;


int main(){
    int age;
    cout<<"Enter me your age"<<endl;
    cin>>age;
    if(age<18 && age>0){
        cout<<"you can do some thing new"<<endl;
    }
    else if(age==18){
        cout<<"you do some thing for world"<<endl;
    }
    else if(age>18 && age<100 ){
        cout<<"you Can come to my party"<<endl;
    }
    return 0;
}
