/*
 take input from user and do the
 addion of even factors of that number and display it on the sereen
 
 */
import java.util.Scanner;


class Numbers
{
    public int EvenFactors(int iNo)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt<=(iNo / 2 ); iCnt++ )
        {
            if(iNo % 2 != 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
}
class program238
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        Numbers nobj = new Numbers();
        iRet = nobj.EvenFactors(iValue);

        System.out.println("Addition of even factors: "+iRet);

    }
}