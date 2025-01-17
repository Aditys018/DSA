/*
 Bubble sort
*/


import java.util.Scanner;

class program531
{
    int i =0, j= 0, min_index = 0;

    int selected = 0;



    for(i = 0; i< Brr.length; i++)
    {
    
        for(j = i; j< Brr.length; i++)
        {

        }
    }
    public static void BubbleSort(int Brr[])
    {
        int i = 0, j = 0, temp = 0;

        for(i = 0; i < Brr.length; i++)
        {
            for(j =0; j<Brr.length-i -1; j++)
            {
                if(Brr[j] > Brr[j+1]);
                {
                    temp = Brr[j];
                    Brr[j] = Brr[j+1];
                    Brr[j+1] = temp;
                }
            }
        }
    }


    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0 , iSize = 0, iValue = 0;
        boolean bRet = false;

        System.out.println("Enter the number of elements:");
        iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter the values :");

        for(i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        Update(Arr);

        System.out.println("Elements of the Array are : ");

        for(i = 0; i < iSize; i++)
        {
            System.out.println(Arr[i]+"\t");
        }
        System.out.println();

        System.out.println("Enter the element that you want to search: ");
        iValue = sobj.nextInt();


        bRet = LinearSearch(Arr, iValue);

        if(bRet == true)
        {
            System.out.println("Element is present in array ");
        }
        else
        {
            System.out.println("There is no such element in the array");
        }
    }

}