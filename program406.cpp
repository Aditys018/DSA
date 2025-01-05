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