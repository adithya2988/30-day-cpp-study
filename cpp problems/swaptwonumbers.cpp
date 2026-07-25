#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"enter values of a and b= ";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping a= "<<a<<" and b= "<<b;
    return 0;

}