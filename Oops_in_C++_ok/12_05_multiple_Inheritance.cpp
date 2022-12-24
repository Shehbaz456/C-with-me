#include<iostream>
using namespace std;

class Employee{
    protected:
    int Emp_roll_number;
    public:
        void set_Emp_roll_number(int);
        void get_Emp_roll_number();
};

void Employee::set_Emp_roll_number(int r){
    Emp_roll_number = r;
}

class Programer{
    protected:
        char Department[200];
    public:
        void set_deparment();
        void get_deparment();
};

void Programer::set_deparment(){
    cout<<"Enter Department"<<endl;
    cin>>Department;
}
/*
Multiple inheritance

class Derived: visibility_mode base1,visibility_mode base2 

*/

class Web_developer:public Employee,public Programer{
        protected:
        int project_id;
        public:
            void set_project_id(int p_id){
                project_id=p_id;
            }
            void web_developer_info(void){
            cout<<"Web Developer Information "<<endl;
            set_deparment();
            cout<<"Employee roll number"<<Emp_roll_number<<endl;   
            cout<<"your Department is "<<Department<<endl;
            cout<<"project_id is "<<project_id;
            }
};

int main(){
    Web_developer Shehbaz;
    Shehbaz.set_Emp_roll_number(190001);
    Shehbaz.set_project_id(102);
    Shehbaz.web_developer_info();
    return 0;
}