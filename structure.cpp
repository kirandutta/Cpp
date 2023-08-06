#include<iostream>
using namespace std;
typedef struct employee
{
    int eid;
    char favchar;
    float salary;
}su;

int main()
{
su s;
s.eid=1;
s.favchar='c';
s.salary=1200000;
su t;
t.eid=2;
t.favchar='d';
cout<<"The value is "<<s.eid<<endl;
cout<<"The value is "<<s.favchar<<endl;
cout<<"The value is "<<s.salary<<endl; 
cout<<"The value is "<<t.favchar<<endl;
return 0;
}