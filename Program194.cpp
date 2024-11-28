/*
VIMP Program from today
constructor , destructor & class designing  in cpp

reverse the elements of an array

*/

#include<iostream>
using namespace std;


class Array
{
    public:
        int *Arr;
        int iSize;

        Array(int A)
        {
            iSize = A;
            Arr = new int[iSize];
        }

        ~Array()
        {
            delete []Arr;
        }
        void Accept()
        {
            int iCnt = 0;

             cout<<"Enter the values: \n";
             for(iCnt = 0; iCnt < iSize; iCnt++)
             {
                  cin>>Arr[iCnt];
             }
        }
        void Display()
        {
            int iCnt = 0;

             cout<<"values from the array are: \n";
             for(iCnt = 0; iCnt < iSize; iCnt++)
             {
                   cout<<Arr[iCnt]<<"\n";
             }

        }

};
int main()
{

    int iLength = 0, iCnt = 0;
    int *Arr = NULL;

    cout<<"Enter no. of elements that you want to store: \n";
    cin>>iLength;

    Arr = new int[iLength];
    

    delete[] Arr;

    return 0;

}