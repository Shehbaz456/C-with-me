// #include<iostream>
// using namespace std;

// // inline int product(int a,int b){
// //     return a*b;
// // }
// inline int product(int a,int b){
//     // not recommended to use below lines with inline function
//     static int c=0; //This executes only once
//     c = c+1;  //next time this function is run, the value of c will be retained
//     return a*b+c;
// }

// int moneyReceived(int currentMoney, float factor=1.04){
//        return currentMoney * factor;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b "<<endl;
//     cin>>a>>b;
//     cout<<product(a,b)<<endl;
//     int money = 100000;  
//     cout<<"if you have "<<money<<endl;
//     cout<<"Rs in your account, you will recive "<<moneyReceived(money)<<" Rs after one year"<<endl;
//     // cout<<"Rs in your account, you will recive "<<moneyReceived(money,1.2)<<" Rs after one year"<<endl;
//     return 0;
// }




#include<iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}

int main(){
    int a,b;
    cout<<"Enter the num of a and b "<<endl;
    cin>>a>>b;
    cout<<"product of this number is = "<<product(a,b)<<endl;
    cout<<"product of this number is = "<<product(a,b)<<endl;
    cout<<"product of this number is = "<<product(a,b)<<endl;
    cout<<"product of this number is = "<<product(a,b)<<endl;
    return 0;
}


