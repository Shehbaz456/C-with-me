#include<iostream>
using namespace std;

class BankDeposit
{
    int Principle;
    int years;
    float interestRate;
    float returnValue;
public:
    BankDeposit(){}
    BankDeposit(int p,int y,float r); //r can be a value like 0.04
    BankDeposit(int p,int y,int r); //r can be a value like 14
    void Show();
};

BankDeposit::BankDeposit(int p,int y,float r){
    Principle = p;
    years = y;
    interestRate =r;

    returnValue =Principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+r);
    }
}
BankDeposit::BankDeposit(int p,int y,int r){
    Principle = p;
    years = y;
    interestRate=float(r)/100;

    returnValue =Principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit::Show(){
    cout<<endl<<"Principle amount was "<<Principle;
    cout<<". Return value after "<<years
    << " year  is "<<returnValue<<endl;

}

int main(){
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    bd3.Show();

    // cout<<"Enter the value of p y and r"<<endl;
    // cin>>p>>y>>r;
    // bd1 = BankDeposit(p,y,r);
    // bd1.Show();
    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p,y,R);
    bd2.Show();
    return 0;
}