#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
{
  cout<<"enter element at index "<<i<<": ";
  cin>>arr[i];
}
 for(int i=0;i<n;i++)
 {
    if(arr[i]%2==0)
    {
        count++;
    }
 }
 cout<<"the number of even numbers in the array is: "<<count<<endl;
    return 0;
}