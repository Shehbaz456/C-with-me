#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void)  ;
};

void Student::set_roll_number(int r){
    roll_number=r;
}
void Student::get_roll_number(void){
    cout<<"The roll number is "<<roll_number<<endl;
}

class Exam: public Student{
    protected:
        float maths;
        float Physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Exam ::set_marks(float m1,float m2){
    maths=m1;
    Physics=m2;
}
void Exam::get_marks(void){
    cout<<"this is my physics Marks"<<Physics<<endl;
    cout<<"this is my maths Marks"<<maths<<endl;
}

class Result:public Exam{
    float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout<<"your Percentage is "<<(maths+Physics)/2<<endl;
        }
};

int main(){
    /*
    Notes
    if we are inheriting B from A and C from B: [ A-->B-->C ]
    1.A is the base class for B and B is the base class for C
    2.A-->B-->C is called Inheritance Path
    */
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(99.9,100);
    harry.display_result();

    return 0;
}