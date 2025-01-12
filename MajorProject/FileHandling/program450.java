package MajorProject.FileHandling;

import java.io.File;
import java.util.Scanner;


class program450
{
    public static void main(String Arg[])
    {
        try
        {
            boolean bret = false;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter file name that you want to create:");
            String name =  sobj.nextLine();

            File fobj = new File(name);

            if(fobj.exists())
            {
                System.out.println("File is already existing in the folder");
                
            }
            else
            {
                bret = fobj.createNewFile();

                if(bret == true)
                {
                    System.out.println("File successfully created");

                }
                else
                {
                    System.out.println("Unable to create the file");
                }
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occurred.."+eobj);
        }
    }
}