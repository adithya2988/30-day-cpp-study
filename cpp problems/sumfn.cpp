#include <iostream>
using namespace std;

int sum(int a,int b);

int main() {
    int num1,num2;
    cout<<"enter first number: ";
    cin>>num1;
     cout<<"enter second number: ";
    cin>>num2;
    int result = sum( num1,num2);
    cout<<"sum="<<result;
}

int sum(int a,int b)
{
    return a+b;
    return 0;
}

    
  

