#include<iostream>
using namespace std;

// Distructor never take an argument nor does it return any value   

int count=0;
class num{
    public:
        num(){
            count++;
            cout<<"this is the time when constructor is called for object number "<<count<<endl;
        }
        ~num(){
          cout<<"this is a time when my destructor is called for object number "<<count<<endl;     
          count--;     
        }   
};
int main(){    
    cout<< "We are inside our main function"<<endl;
    cout<<"Creating first objects n1"<<endl;
    num n1;
    {
        cout<<"Entering this block "<<endl;
        cout<<"creating two more object "<<endl; 
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}



