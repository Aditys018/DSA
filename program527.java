/*
 Linear Search
*/


import java.util.Scanner;

class program527
{

    public static boolean BinarySearch(int Brr[] , int iNo)
    {
        int iStart = 0, iNid = 0, iEnd = 0;
        boolean bResult = 0;

        iMid = iStart + (iEnd - iStart) /2;

        if(Brr[iMid] == iNo)
        {
            bResult = true;
            break;
        }

        if(iNo > Brr[iMid])
        {
            iStart = iMid + 1;
        }
        else
        {
            iEnd = iMid - 1;
        }
    }
    return bResult;


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