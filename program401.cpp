#include<iostream>
using namespace std;


template <class T>
T Addition(T Arr[], int iSize)
{
    T iSum = 0.0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    double Brr[] = {10.0, 20.0, 30.0, 40.0};
    double iRet = 0.0;

    iRet = Addition(Brr, 4);
    cout<<"Addition is: "<<iRet<<"\n";

    return 0;
}