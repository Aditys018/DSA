/*
Object oriented programming designing of code than previous code

take input from user and display it's factors

*/

#include<iostream>
using namespace std;



class Number
{
    public:
        int iNo;

        Number(int A)
        {
            iNo = A;
        }

        void DisplayFactors()
        {
             int iValue1 = 0;
             for(int i=1; i<=iNo/2; i++)
            {
                if(iValue1 == 0)
            {
                cout<<iValue1<<"\n";
            }
    }
        }
};

int main()
{
   int iValue = 0;
   cout<<"Enter number: \n";
   cin>>iValue;

   nobj.DisplayFactors();


}

