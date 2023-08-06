/*#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setData(int a,int b){
            real=a;
            imaginary=b;
        }
};

int main()
{
    Complex *ptr=new Complex;
    ptr->setData(1,54);
    ptr->getData();  
return 0;
}*/

#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setData(int a,int b){
            real=a;
            imaginary=b;
        }
};

int main()
{
    Complex *ptr=new Complex;
    ptr->setData(1,54);
    ptr->getData();

    Complex *ptr1=new Complex[4];
    ptr1->setData(1,4);
    ptr1->getData();
    (ptr1+1)->setData(4,5);
    (ptr1+1)->getData();

return 0;
}