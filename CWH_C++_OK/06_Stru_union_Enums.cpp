#include<iostream>
using namespace std;
// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// }ep;

// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };

union money
{
    int rice; //4
    char car; //1
    float pounds; //4
};
// union takes maximum bytes 
// and  we can use 1-datype at a time
// good memory management


int main(){
// Structure
    // ep harry;
    // struct employee harry;

    // harry.eId = 1 ;
    // harry.favChar = 'c';
    // harry.salary = 400000;
    // cout<<harry.salary<<endl;
    // cout<<harry.eId<<endl;
    // cout<<harry.favChar<<endl;

// union
    // union money m1;
    // m1.rice =23;
    // m1.car ='c';
    // // cout<<m1.rice;
    // cout<<m1.car;
// note:- rice gives grbage value becouse we can use 1 datatype at a time


// Enums
    enum meal{breakfast,lunch,dinner};
    meal m1 =lunch;
    cout<<m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    return 0;
}      