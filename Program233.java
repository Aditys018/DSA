import java.util.Scanner;


class Calculations
{
   
   public int CalculatePercentage(int A, int B)
   {
     fAns = 0;
     
   }

}
class program233
{
    public static void main(String A[])
    {
      int No1 = 0, No2 = 0, Ans = 0;
      float fAns = 0.0f;
      
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter obtained marks : " );
      No1 = sobj.nextInt();

      System.out.println("Enter total marks : " );
      No2 = sobj.nextInt();

      Calculations cobj = new Calculations();
      fAns = aobj.CalculatePercentage(iNo1, iNo2);

      System.out.println("Percentage is: " + fAns);
      
    }
}