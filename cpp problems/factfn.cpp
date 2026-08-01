#include <iostream>
using namespace std;

long long fact(int n);


int main() {
    int num;
    cout<<"enter a number: ";
    cin>>num;
    long long result = fact(num);
    cout<<"factorial="<<result;
    return 0;
}


    long long fact(int n)
    {
       long long facto=1;
       for(int i=1;i<=n;i++)
       {
        facto=facto*i;
       }
       return facto;
    }
