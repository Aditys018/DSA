/*
take a number from user and and the position of the bit and then turn off the bit if it is on
iPos: 9

*/

#include<iostream>
using namespace std;


int main()
{
    int iValue = 0;
    int iMask = 0x10;
    int iResult = 0;
   
    cout<<"Enter the number : \n";
    cin>>iValue;

    iResult = iValue ^ iMask;


    cout<<"Number after bit toggle: "<<iResult<<"\n";

    return 0;

}