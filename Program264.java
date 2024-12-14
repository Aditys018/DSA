/*
 * write maximum value from the array
 *
 */


import java.util.Scanner;


class Arrayx
{
    public int Arr[];

    public Arrayx(int iSize)
    {
        Arr = new int [iSize];
    }

    public void Accept()
    {
      int i = 0;
      System.out.println("Enter the number of elements: ");

      for(i = 0; i< Arr.length; i++)
      {
        Arr[i] = sobj.nextInt();
      }
    }
    public void Display()
    {
        System.out.println("Elements of array are: ");

        for(i = 0; i<Arr.lenght; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}
class program264
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);
       int iSize = 0, i = 0;

       System.out.println("Enter the number of elements: ");
       iLength = sobj.nextInt();
    }
}