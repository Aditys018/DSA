/*
take a number from user and check weather it's second last bit is on or off

*/

#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x44;
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
    { cout<<"3rd and 7th bit is ON\n"; }

    else{ cout<<"3rd and 7th Bit is OFF\n"; }

    return 0;
    
}