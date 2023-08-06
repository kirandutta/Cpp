#include<iostream>
using namespace std;

int sum(int,int);

int main()
{
int c,d;
cout<<"Enter the 1st no: "<<endl;
cin>>c;
cout<<"Enter the 2nd no: "<<endl;
cin>>d;
cout<<"The sum is: "<<sum(c,d);
return 0;
}

int sum(int a,int b)
{
    int c=a+b;
    return c;
}