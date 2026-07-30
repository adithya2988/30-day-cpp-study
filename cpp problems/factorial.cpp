#include<iostream>
using namespace std;

int main()
{
    int fact=1;
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"the factorial of "<<n<<" is: ";
    for(int i=1;i<=n;i++)
    {
      fact=fact*i;
      
    }
    cout<<fact;
return 0;
}