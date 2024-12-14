/*
 take input from user and do the
 addion of even factors of that number and display it on the sereen
 
 */
import java.util.Scanner;

class Digits
{
    public int Addition(int iNo)
    {
        int iDigit = 0;
        int iSum = 0 ;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo /10;
        }
        return iSum;
    }
}
class program244
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.Addition(iValue);

        System.out.println("Addition of digits: "+iRet);
    }
}