/*
VIMP Program from today
constructor , distructor & class designing  in cpp

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
             for(iCnt = 0; iCnt < iSize; iCnt++)    //Logic (Function)
             {
                  cin>>Arr[iCnt];
             }
        }
        void Display()
        {
            int iCnt = 0;

             cout<<"values from the array are: \n";
             for(iCnt = 0; iCnt < iSize; iCnt++)    //Logic (function)
             {
                   cout<<Arr[iCnt]<<"\n";
             }

        }

};
int main()
{

    int iLength = 0, iCnt = 0;
    int *Arr = NULL;      //Data(Characteristics)

    cout<<"Enter no. of elements that you want to store: \n";
    cin>>iLength;

    Arr = new int[iLength];   //Resource allocation(constructor)
    //syntax in c= Arr = (int*)malloc(sizeof(int)*iLength);

    delete[] Arr;     //resource deallocation (destructor)

    return 0;

}