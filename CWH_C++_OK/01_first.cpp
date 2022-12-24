#include<iostream>
using namespace std;
int main()
{
    // cout <<"\nhello World\n\n";  
    // int a=3,b=4;
    // cout<<a+b;

// ******** float, double and long double literals *********
//    float d = 32.5f; 
//    long double p = 32.5L; 
//    cout<<"the size of 34.5 is "<<sizeof(32.5)<<endl;
//    cout<<"the size of 34.5f is "<<sizeof(32.5f)<<endl;
//    cout<<"the size of 34.5F is "<<sizeof(32.5F)<<endl;
//    cout<<"the size of 34.5l is "<<sizeof(32.5l)<<endl;
//    cout<<"the size of 34.5L is "<<sizeof(32.5L)<<endl;

    // cout<<"the value of d is "<<d<<endl;
    // cout<<"the value of d is "<<p;


    //*********** reference variables **********
    //Rohan das ---->Monty ----> Rahu ----> techRander4U
    // float x = 255;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;


    // ********** TypeCasting **********
    int a =44;
    float b= 43.332;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<<float(a)<<endl;

    cout<<"the value of b is "<<(int)b<<endl;
    cout<<"the value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"the expression is "<<a+b<<endl;
    cout<<"the expression is "<<a+int(b)<<endl;

    return 0;
}
