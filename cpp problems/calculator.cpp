#include <iostream>
using namespace std;

int main() 
{
    double num1,num2;
    char op;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;
    cout<<"enter operator: ";
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
        cout<<num1/num2;
        break;
        default:
        cout<<"invalid operator";
       
    }
     return 0;
}