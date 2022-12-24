

#include<iostream>
#include<string>
using namespace std;

class binary{
    // by defoult class member are private
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void);
        void ones_compliment(void);
        void display(void);
};

void binary ::read(void){
    cout<<"Enter a binary number "<<endl;
    cin>>s;
}

void binary ::chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format "<<endl;
            exit(0);
        }
    }    
}

void binary :: ones_compliment(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void binary :: display(void){
    cout<<"Display your binary number"<<endl;
    for (int i = 0; i < s.length(); i++){
         cout<<s.at(i);
    }
}
 
int main(){  

    // Nesting of member functions
    binary b;
    b.read();
    // b.chk_bin(); //not access becouse it is private
    b.ones_compliment(); 
    b.display();
    return 0;
}


// v22 C++ CWH  19:50






