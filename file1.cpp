#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st="Subhajit Pramanick";
    ofstream out("sample1.txt");
    out<<st;
    return 0;
}