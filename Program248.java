/*
 take input from user and
 check how many times the number 5,6,7,8 is repeted

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
        int iCount5 = 0,  iCount6 = 0,  iCount7 = 0,  iCount8 = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if (iDigit == 5)
            {  iCount5++; }
           else  if (iDigit == 6)
            {  iCount6++; }
            else  if (iDigit == 7)
            {  iCount7++; }
            else  if (iDigit == 8)
            {  iCount8++; }

            iNo = iNo / 10;
        }
        System.out.println("Frequency of 5 is: " );
       
    }
}
class program248
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