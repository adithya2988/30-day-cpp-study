#include <iostream>
using namespace std;

int main()
{
    int reversed =0;//to store the reversed number
    int num;
    cout<< "enter a number to reversed: ";
    cin>>num;
    while(num!=0)//executes the code till the number is not equlal to zero
    {
        int digit=num%10;// after dividing the number by 10 we get the kast digit of the number
        reversed=reversed*10+digit;//this line does this - 0=0*10+digit which gives the last digit and then does it again so like reversed=digit*10+digit which gives the second last digit and so on
        num=num/10;
    }
    cout<< "the reversed number is: "<<reversed;
     return 0;
}