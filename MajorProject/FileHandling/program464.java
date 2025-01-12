package MajorProject.FileHandling;

import java.io.File;
import java.util.Scanner;

public class program464 {

    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of directory that you want to open: ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists())
        {
            System.out.println("Directory present");

            File Arr[] = fobj.listFiles();

            System.out.println("Number of files in directory: ", +Arr.length);

            int i = 0;

            for(i=0; i<Arr.length; i++)
            {
                
            }



        }
    }
    
}
