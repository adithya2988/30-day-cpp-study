#include <iostream>
using namespace std;
struct employee 
{
    int id;
    char name[20];
    float salary;
};

int main() {
 employee e1 = {1,"babu",100000};
 employee e2 = {2,"kumar",200000};
 cout<<"Employee 1 details:"<<endl; 
 cout<<"ID: "<<e2.id<<endl;

    
    return 0;
}