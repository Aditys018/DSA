#include<iostream>
using namespace std;

double AdditionD(double no1, double no2)
{
    double Ans = 0;
    Ans = no1 + no2;
    return Ans;
}
int main()
{
    double iRet = 0;
    iRet = AdditionD(11.7f,10.3f);

    cout<<"Addition is: "<<iRet<<"\n";

    return 0;
}