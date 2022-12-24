#include<iostream>
using namespace std;

class Base{
    // protcted is Same as private but we can inherit in Derive class
    protected:
        int a;
    private:
        int b; 
};
/*
for protected member :
         Public Derivation   Private Derivation  Protected Derivation
private members   (N i)             (N i)           Not inherited
Protected members  protected       private          Protected
Public members   public            private          Protected



Not inherited(N i)
*/
class Derived: protected Base{

};
int main(){
    Base b;
    Derived d;
    // cout<<d.a;  //will not work since a is protected in both base as well as derived class
    return 0;
} 