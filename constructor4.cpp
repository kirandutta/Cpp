#include<iostream>
#include<cmath>
using namespace std;

class Point{
    double a,b;
    friend void operation(Point ,Point );
    public:
        Point(double x,double y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<"The point is: ("<<a<<","<<b<<")"<<endl;
        }
};

void operation(Point p1,Point p2)
{
    double c;
    c=sqrt(pow(p2.a-p1.a,2)+pow(p2.b-p1.b,2));
    cout<<"The difference is "<<c<<endl;
}

int main()
{
    double x1,y1,x2,y2;
    cout<<"Enter the 1st point: "<<endl;
    cin>>x1>>y1;
    cout<<"Enter the 2nd point: "<<endl;
    cin>>x2>>y2;
    Point p(x1,y1);
    p.display();
    Point q(x2,y2);
    q.display();
    operation(p,q);
    return 0;
}