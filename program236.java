import java.util.Scanner;


class Calculations
{
   
   public int CalculateArea(int A, int B)
   {
     int iArea = 0;
     iArea = A * B;
     return iArea;
     
   }

}
class program236
{
    public static void main(String A[])
    {
      int No1 = 0, No2 = 0;
      float fAns = 0.0f;
      
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Length : " );
      No1 = sobj.nextInt();

      System.out.println("Enter breadth: " );
      No2 = sobj.nextInt();

      Calculations robj = new Rectangle();
      fAns = robj.CalculateArea(iNo1, iNo2);

      System.out.println("Area is: " + fAns);
      
    }
}