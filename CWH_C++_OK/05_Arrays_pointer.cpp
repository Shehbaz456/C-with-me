#include<iostream>

using namespace std;
int main(){
    int marks[4] ={23,45,25,64};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2] =900;   // you can change the value of an array
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // int mathmarks[4];
    // mathmarks[0] = 312;
    // mathmarks[1] = 232;
    // mathmarks[2] = 324;
    // mathmarks[3] = 876;

    // cout<< "this is are math marks"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    // }
    

    // Pointers and arrays
    int *p = marks;
    cout<<*(p++);
    cout<<*p;
    // cout<<"the value of marks[0] is "<<p<<endl;
    // cout<<"the value of *p is "<<*p<<endl;
    // cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"the value of *(p+3) is "<<*(p+3)<<endl;



    return 0; 

}
// L=13
// time =13:20