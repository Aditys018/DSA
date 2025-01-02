/*
take a number from user and and the position of the bit and then check it's on or off(using leftshift operator and & operator)
iPos: 9

*/

#include<iostream>
using namespace std;

bool CheckBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;
    iMask = iMask << (iPos - 1);

    
    iResult = iNo & iMask;

    if(iResult == iMask){ return true; }

    else{return false;}
}
int main()
{
    int iValue = 0, int iLocation = 0;
    int bRet = false;

    cout<<"Enter the number : \n";
    cin>>iLocation;

    bRet = CheckBit(iValue, iLocation);

    if(bRet == true)
    {
        cout<<"Bit is ON\n";
    }
    else
    {
         cout<<"Bit is OFF\n";
    }

    return 0;
    
}