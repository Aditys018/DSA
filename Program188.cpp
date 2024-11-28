/*
improved Time complexity than previous code


*/

#include<iostream>
using namespace std;



void DisplayFactors(int iNo)  //TC = O(N/2)
{
    int iValue1 = 0;
    

    for(int i=1; i<=iNo/2; i++)  //directly declare %2 in for loop
    {
       if(iValue1 == 0)
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

/*
topics covered til date:

Problems on numbers
Problems on digits
Problems on  N numbers
Problems on pattern printing
Problems on string

*/