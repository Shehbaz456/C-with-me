#include<iostream>
#include <math.h>
using namespace std; 
int PI = 3.14159265;

/*

*** Create 2 classes:
   1.SimpleCalculator; -takes input of 2 number useing a utility function and perform + -  * /  and displays the results using 
   another function. 

    2.ScientificCalculator -takes input of 2 number useing a utility function and perform any four scintific operation of your choice 

*** Create another class Hybreadcalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using ?
    Q2. Which mode of Inheritance are you using ?
    Q3. Create an object of Hybreadcalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented ?


*/
class SimpleCalculator{
    protected:
    float Sum;
    float Subtract;
    float Multiply;
    float Devide;
    public:
    float num1,num2;
        void set_input_number(void){
            cin>>num1;
            cin>>num2;
        }
        void Show_Simple_calculation(){
            cout<<"Simple_calculation of Calculator"<<endl;
            cout<<"Enter two number for calculation"<<endl;
            set_input_number();
            cout<<"Sum is  of two number: "<<num1+num2<<endl;
            cout<<"Subtraction of two number: "<<num1-num2<<endl;
            cout<<"Multiply of two number: "<<num1*num2<<endl;
            cout<<"Devide of two number: "<<num1/num2<<endl;
        }
};

class ScientificCalculator{
    protected:
        float num;
        float square_root;
        float sin_result;
        float cos_result;
        float tan_result;
    public:
        void set_input_number_SC(void){
            cin>>num;
        }
        void Scientific_Calculation_(){
            cout<<"Scientific_Calculation of Calculator"<<endl;
            cout<<"Enter a number for Scientific_Calculation"<<endl;
            set_input_number_SC();
            cout<<"Square root of number1: "<<sqrt(num)<<endl;
            cout<<"Sin result of number1: "<<sin (num*PI/180)<<endl;
            cout<<"Cos result of number1: "<<cos(num*PI/180)<<endl;
            cout<<"Tan result of number1: "<<tan(num*PI/180)<<endl;
        }
};

class Hybreadcalculator:public SimpleCalculator,public ScientificCalculator{
    public:
    void Show_hybread_Calculation_(void){
        Show_Simple_calculation();
        cout<<endl;
        cout<<endl;
        Scientific_Calculation_();
    }
};

int main(){
    Hybreadcalculator harry;
    harry.Show_hybread_Calculation_();
    return 0;
}