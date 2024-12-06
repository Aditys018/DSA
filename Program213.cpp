/*
take a number from user and check weather it's 10th bit is on or off

*/

#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 512;  // decimal format so no need to add prefix i.e 0x....
    int iResult = 0;
    iResult = iNo & iMask;

    if(iResult == iMask){ return true; }

    else{return false;}

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    { cout<<"bit is ON\n"; }

    else{ cout<<"Bit is OFF\n"; }

    return 0;
    
}