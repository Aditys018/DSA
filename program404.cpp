#include<iostream>
using namespace std;

class Array
{
   

    private:
        int *Arr;
        int iSize;

    public:
  
        Array(int size)
        {
            iSize = size;
            Arr = new int[iSize];
        }

     
        ~Array()
        {
            delete [] Arr;
        }
        
       
        void Accept()
        {
            cout << "Please enter " << iSize << " elements:\n";
            for(int i = 0; i < iSize; i++)
            {
                cout << "Element " << i+1 << ": ";
                cin >> Arr
};

int main()
{
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;

    
    Array aobj(size);

    
    aobj.Accept();

   
    aobj.Display();

  
    int sum = aobj.Addition();
    cout << "Addition of array elements is: " << sum << "\n";

    return 0;
    
}