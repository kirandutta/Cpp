#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    int marks[5];
    cout<<"Enter the marks of the array: "<<endl;
    for(int i=0;i<5;i++)
    cin>>marks[i];
    ptr=marks;
    cout<<"The array is: "<<endl;
    for(int i=0;i<5;i++)
    cout<<*(ptr+i)<<endl;
    return 0;
}