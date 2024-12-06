/*
problems on bitwise operators

bytes int = 4
1byte =  8bits
total bits in int = 8 * 4 = 32

*/

#include<iostream>

using namespace std;



int main()
{
    int No1 = 13;
    int No2 = 24;
    int Ans = 0;

    Ans = No1 & No2;
    cout<<"Bitwise and : " <<Ans<<"\n";

    Ans = No1 | No2;
    cout<<"Bitwise or : "<<Ans<<"\n";

    Ans = No1 ^ No2;
    cout<<"Bitwise xor: "<<Ans<<"\n";

    return 0;
    
}