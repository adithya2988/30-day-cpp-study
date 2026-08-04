#include <iostream>
#include<climits>//ts for the INT_MIN 
using namespace std;

int main() {
int n;
cout << "Enter the size of the array: ";
cin >> n;
int arr[n]; // Declare an array of size n
for(int i=0;i<n;i++)
{
    cout<<"Enter the element at index "<<i<<": ";
    cin>>arr[i];
}
cout<<"The elements of the array are: ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

// challenging my self by finding the largest and secondlargest number in the array

int largest=arr[0];
int secondlargest=INT_MIN;
for(int i=1;i<n;i++)
{
    if(arr[i]>largest)//checks if arr[i] is bigger than current largest value if it is then we set the 
                     //current value to secondlargest value and set the vigger value to the largest var
    {
        secondlargest=largest;
        largest=arr[i];
    }
    else if (arr[i]>secondlargest && arr[i]!=largest)
//if the new value is not biggerthan larget it coes here
//here wee check if the new value is bigger than second laergest
// cuz it aint bigger than largest and we have to check that its
// not equal to the largest value too if its both clear then we 
//assign the new value to secondlargest 
    {
        secondlargest=arr[i];
    }
}
cout<<endl<<"The largest value is: "<<largest<<endl;
cout<<"The second largest value is: "<<secondlargest<<endl;
    return 0;
}