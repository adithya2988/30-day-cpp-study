#include <iostream>
using namespace std;

 long long power(int base,int exp);

int main() {
    int numE,numB;
    cout<<"enter base and exponent: ";
    cin>>numB>>numE;
    long long result = power(numB,numE);
    cout<<result;
    return 0;
}
long long power(int base, int exp)
{
    long long result = 1;
    for(int i=1;i<=exp;i++)
    {
        result=result*base;
    }
    return result;
}