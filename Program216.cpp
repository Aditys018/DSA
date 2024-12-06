/*
take a number from user and check weather it's second last bit is on or off

*/

#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 65536;
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
    { cout<<"17th bit is ON\n"; }

    else{ cout<<"17th Bit is OFF\n"; }

    return 0;
    
}