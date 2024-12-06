import java.util.Scanner;


class Arithmatic
{
   public int iValue1;
   public int iValue2;

   Arithmatic(int A, int B)
   {
    iValue1 = A;
    iValue2 = B;
   }
   public int Addition()
   {
    int Result = 0;
    Result = iValue1 + iValue2;
    return Result;
   }
}
class program232
{
    public static void main(String A[])
    {
      int No1 = 0, No2 = 0, Ans = 0;
      
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter first number : " );
      No1 = sobj.nextInt();

      System.out.println("Enter second number : " );
      No2 = sobj.nextInt();

      Arithmatic aobj = new Arithmatic();
      Ans = aobj.Addition(No1,No2);

      System.out.println("Addition is: " + Ans);
      
    }
}