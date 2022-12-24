// #include<iostream>
// using namespace std;

// class complex{
//     int a,b;
//     public:
//     complex(int x,int y){
//         a=x;
//         b=y;
//     }
//     complex(int x){
//         a=x;
//         b=0;
//     }
//     void printNumber(){
//         cout<<"your complex number is:  "<<a<<"+"<<b<<"i"<<endl;
//     }
// };
// int main(){
//     complex c1(4,6);
//     c1.printNumber();
//     complex c2(5);
//     c2.printNumber();
//     return 0;
// }










// #include<iostream>
// using namespace std;

// class complex
// {
// private:
//     int a,b;
// public:
//     complex(){
//             a=0;
//             b=0;
//         }
//     complex(int x,int y){
//         a=x;
//         b=y;
//     }
//     complex(int x){
//         a=x;
//         b=0;
//     }
    
//     void printNumber(){
//         cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };



// int main(){
//     complex q(1,4);
//     q.printNumber();
//     complex p(3);
//     p.printNumber();  
//     complex R();
//     R.printNumber();  
//     return 0;
// }




#include<iostream>
using namespace std;
class simple
{
private:
    int data1;
    int data2;
public:
    simple(int a,int b=9){
        data1=a;
        data2=b;
    }
    void printdata();
};
void simple::printdata(){
    cout<<"the value of data is "<<data1<<" and "<<data2<<endl;
}

int main(){
    simple s(1);
    s.printdata();
    return 0;
}
