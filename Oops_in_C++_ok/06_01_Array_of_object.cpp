#include<iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
public:
    void SetId(void){
        salary=122;
        cout<<"Enter Id of Employee"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"the id of this Employee "<<id<<endl;

    }
};


int main(){
    Employee harry,Shehbaz,lovish,Rahul;
    // Shehbaz.SetId();
    // Shehbaz.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].SetId();
        fb[i].getId();
    }
    return 0;
}