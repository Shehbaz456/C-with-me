#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a,int b){
            x=a;
            y=b;
        }
        void displayPoint(){
            cout<<"the ponit is ("<<x<<","<<y<<")"<<endl;
        }
};


int main(){
    Point p(1,1);
    p.displayPoint();
    Point q(4,5); 
    q.displayPoint();
    return 0;
}

// ti 10:06 v30 CWH


















// create a function which takes 2 point objects and computes the distance between those 2 points

// use this example to check your code:
// distance between(1,1) and (1,1) is 0
// distance between(0,1) and (0,6) is 5
// distance between(1,0) and (70,0) is 69

//finally made it , thanks Harry bhai.
// #include <iostream>
// #include <math.h>
// using namespace std;
// class point2;

// class point1
// {
//     int a, b;
//     friend void distance(point1, point2);
// public:
//     point1(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void display()
//     {
//         cout << "the point is "
//              << "(" << a << "," << b << ")" << endl;
//     }
// };
// class point2
// {
//     int c, d;
//     friend void distance(point1, point2);

// public:
//     point2(int x, int y)
//     {
//         c = x;
//         d = y;
//     }
//     void display()
//     {
//         cout << "the point is "
//              << "(" << c << "," << d << ")" << endl;
//     }
// };
// void distance(point1 o1, point2 o2)
// {
//     cout << "distance between them is " << sqrt(pow((o2.c - o1.a), 2) + pow((o2.d - o1.b), 2));
// }
// int main()
// {
//     point1 p1(1, 0);
//     point2 p2(70,0);
//     p1.display();
//     p2.display();
//     distance(p1, p2);

//     return 0;
// }



