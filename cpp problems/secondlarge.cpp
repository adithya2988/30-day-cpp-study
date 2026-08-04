#include <iostream>
#include<climits>
using namespace std;

int main() {
   int arr[]={10,20,30,40,50};
   int largest=arr[1];
   int secondlargest=INT_MIN;
   for(int i=0;i<5;i++)
   {
    if(arr[i]>largest)  // if we get a new largest number then we set the old largest value to
                       // second largest value make the new one largest value
    {
        secondlargest=largest;
        largest=arr[i];
    }
    else if(arr[i]>secondlargest && arr[i]!=largest) // if the new value is not the largest value then we check if its
                                                    // larger than the second largest value if there is one and also have to check that that value is not the largesr value
    {
        secondlargest=arr[i];
    }
   }
   cout<<"the second largest value is: "<<secondlargest<<endl;
    

    return 0;
}