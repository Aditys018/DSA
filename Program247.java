/*
 take input from user and
 check how many times the number 7 is repeted

EX:
883042
 0:1
 2:1
 3:1
 4:1
 8:1
 
 */
import java.util.Scanner;

class Digits
{
    public void CountDigits(int iNo)
    {
        int iCount = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo + (iNo % 10);
            if (iDigit == 7)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
       
    }
}
class program247
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.Digits(iValue);

        System.out.println("Addition of digits: "+iRet);
    }
}