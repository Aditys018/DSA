package MajorProject.FileHandling;

import java.io.File;
import java.io.FileOutputStream;
import java.util.Scanner;


class program449
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
                    int iRet = 0;

                    System.out.println("File successfully created");

                    FileOutputStream foobj = new FileOutputStream(fobj);


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