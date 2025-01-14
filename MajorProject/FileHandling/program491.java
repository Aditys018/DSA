package MajorProject.FileHandling;
/*
 for packing
 */


import java.io.File;
import java.io.FileInputStream;
import java.util.Scanner;

class program491
{
    public static void main(String Arg[])
    {
        String PackName = null;
        Scanner sobj = null;

        try
        {
            sobj = new Scanner(System.in);
           

            System.out.println("---------------------------------------------------------------------");
            System.out.println("--------------  Packer Unpacker CUI Module ----------------");
            System.out.println("---------------------------------------------------------------------");
            

            System.out.println("---------------------------- Unacking Activity -----------------------");

            System.out.println("Enter the name of packed file that you want to unpack: ");
            PackName = sobj.nextLine();

            File fobj = new File(PackName);
            if(fiobj.exists())
            {
                FileInputStream fiobj = new FileInputStream(fiobj);
            }
            else
            {
                System.out.println("There's no such file ");
                return;
            }
            FileInputStream fiobj = new FileInputStream(fobj);


            System.out.println("---------------------------------------------------------------------");
            System.out.println("--------- Thank you for using Packer-Unpacker ------------");
            System.out.println("---------------------------------------------------------------------");

        } // End of try
        catch(Exception eobj)
        {
            System.out.println("Exception occured : "+eobj);
        }
    }
}