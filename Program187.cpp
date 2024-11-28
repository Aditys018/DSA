#include<iostream>
using namespace std;



void DisplayFactors(int iNo)
{
    int iValue1 = 0;
    

    for(int i=1; i<=iNo; i++)
    {
       if(iNo % iValue1 == 0)
       {
        cout<<iValue1<<"\n";
       }
    }


}
int main()
{
   int iValue = 0;
   cout<<"Enter number: \n";
   cin>>iValue;

   DisplayFactors(iValue);


}