package MajorProject.FileHandling;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Scanner;


class program461

{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of source file: ");
        String src = sobj.nextLine();

        System.out.println("Enter the name of destination file: ");
        String dest = sobj.nextLine();

        File fsrc = new File(src);
        File dest = new File(dest);

        if(fdest.exists())
        {
            System.out.println("Destination file is already present");
            System.out.println("Unable to copy");
            return;
        }
        else
        {
            fdest.createNewFile();

            if(!fsrc.exists())
            {
                System.out.println("Source file is missing");
                System.out.println("Unable to copy");
                return;
            }
            FileInputStream fiobj = new FileInputStream(fsrc);
            FileOutputStream fobj = new FileOutputStream(fdest);
        }
    }
}