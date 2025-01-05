#include<iostream>
using namespace std;


template<class T>
T AdditionD(T no1, T no2)
{
    T Ans = 0;
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