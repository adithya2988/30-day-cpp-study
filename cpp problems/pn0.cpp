#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter ur number: ";
    cin>>num;
    if (num>0)
    {
        cout<<"ur number is positive";
    }
    else if(num<0)
    {
        cout<<"ur number is negetive";
    }
    else 
    {
        cout<<"ur number is zero";
    }
}