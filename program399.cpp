#include<iostream>
using namespace std;


float Addition(float Arr[] , int iSize)
{
    float iSum = 0;
    int i = 0;

    for(i = 0; i<iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    float Brr[] = {10,20,30,40};
    float iRet = 0;

    iRet = Addition(Brr,4);
    cout<<"Addition is:"<<iRet<<"\n";

    return 0;
}