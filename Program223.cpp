/*
take a number from user and and the position of the bit and then turn off the bit if it is on
iPos: 9

*/

#include<iostream>
using namespace std;

int ToggleBit(int iNo, int iPos)
{
    int iMask = 0x10;
    int iResult = 0;
    iMask = iMask <<(iPos - 1);
    iResult = iNo ^ iMask;
    return iResult;
}
int main()
{
    int iValue = 0, iRet = 0, iLocation = 0;
    
   
    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = ToggleBit(iValue,iLocation);

    cout<<"Number after bit toggle: "<<iRet<<"\n";

    return 0;

}