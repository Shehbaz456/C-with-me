#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 100.0;
    }
    Employee() {}
};

// Derived Class syntax
/*

class {{derived-class-name}}:{{visibility-mode}}{{base-class-name}}
{f
    class member/ method / etc...
}

1.Default visibility mode is Private
2. Public visibility Mode:
    Public member of base class becomes Public member of the derived class
3. Private visibility Mode:
    Public member of base class becomes Private member of the derived class

4. Private member are never inherited

*/

// Creating a programmer class derived from Employee Base Class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 6;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(4);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillf(10);
    cout << skillf.languageCode<<endl;
    cout << skillf.id<<endl;
    skillf.getData();

    return 0;
}

// cwh video #37