#include<iostream>
using namespace std;

// int main()
// {
//     int a=4;
//     int* ptr=&a;
//     cout<<"The value of a is "<<*ptr<<endl;
// return 0;
// }

// int main()
// {
//     float *p=new float(40.7);
//     cout<<"The value of p is "<<*p<<endl;
// }

int main(){
    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    delete [] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
}