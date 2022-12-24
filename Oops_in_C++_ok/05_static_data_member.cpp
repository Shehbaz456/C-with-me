// #include<iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     static int count;
//     // int count ---har object ka apna variable hota hai so we can use Static int count to solve problem
    
// public:
//     void setData(void){
//         cout<<"Enter the id"<<endl;
//         cin>>id;
//         count++;
//     }
//     void getData(void){
//         cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
//     }

//     static void getcount(void){
//         // cout<<id;    //throws an Error
//         cout<<"the value of count is "<<count<<endl;
//     }
// };

// // count is the Static data member of class Employee
// int Employee::count=1000; //default value is 0

// int main(){
//     Employee harry,rohan,lovish;
//     harry.setData();
//     harry.getData(); 
//     Employee::getcount();

//     rohan.setData();
//     rohan.getData();
//     Employee::getcount();

//     lovish.setData();
//     lovish.getData(); 
//     Employee::getcount();
//     return 0;
// }











#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    // int count ---har object ka apna variable hota hai so we can use Static int count to solve problem
    
public:
    void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
};

// count is the Static data member of class Employee
int Employee::count=100; //default value is 0

int main(){
    Employee harry,rohan,lovish;
    harry.setData();
    harry.getData(); 
 
    rohan.setData();
    rohan.getData();

    lovish.setData();
    lovish.getData(); 
    return 0;
}
