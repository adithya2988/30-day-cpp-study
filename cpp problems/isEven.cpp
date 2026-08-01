#include <iostream>
using namespace std;

bool isEven(int a);

int main() 

{
    
int num;
cout<<"enter a number: ";
cin>>num;
if(isEven(num))
{
    cout<<"the number is even";
}
else
{
    cout<<"the number is odd";
}

    return 0;
}

    bool isEven(int a)
    {
    if(a%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


    
