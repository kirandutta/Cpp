#include<iostream>
using namespace std;
struct emp
{
    char name[20];
    int age;
    float sal;
};
emp e1={"Amol",21,2345.00};
emp e2={"Ajay",19,2300.00};
emp &fun();
int main()
{
   fun()=e2;
   cout<<endl<<e1.name<<endl<<e1.age<<endl<<e1.sal;
   return 0;
}
emp &fun()
{
    emp e3={"Aditya",21,3300.75};
    return e3;
}