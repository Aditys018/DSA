#include<iostream>
using namespace std;

int main()
{

    int iLength = 0, iCnt = 0;
    int *Arr = NULL;      //Data(Characteristics)

    cout<<"Enter no. of elements that you want to store: \n";
    cin>>iLength;

    Arr = new int[iLength];   //Resource allocation(constructor)
    //syntax in c= Arr = (int*)malloc(sizeof(int)*iLength);

    cout<<"Enter the values: \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)    //Logic (Function)
    {
        cin>>Arr[iCnt];
    }

    cout<<"values from the array are: \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)    //Logic (function)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    delete[] Arr;     //resource deallocation (destructor)

    return 0;
}