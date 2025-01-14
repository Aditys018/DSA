package MajorProject.FileHandling;

import java.io.File;
import java.util.Scanner;

class program476
{
    System.out.println("______________________________________________________________________________");
    
    System.out.println("________________________________________Packer Unpacker CUI Module_________________________________________");
    
    System.out.println("______________________________________________________________________________");
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        
    System.out.println("____________________________________________Packing Activity__________________________________");

        System.out.println("Enter the name of directory that you want to open for packing: ");
        String DirName = sobj.nextLine();

        System.out.println("Enter the name of packed file that you want to create:");
        String PackName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists())
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles();

            System.out.println("Number of files in the Directory are : "+Arr.length);

            int i = 0, j = 0;

            String Header = " ";
            for(i = 0; i < Arr.length; i++)
            {
                Header = Arr[i].getName()+" "+Arr[i].length();
                System.out.println(Header);
              
                for(j = Header.length(); j<100; j++)
                {
                    Header = Header+ " ";
                }
                Header = "";
            }
            
        }
        
        else
        {
            System.out.println("There is no such directory");
        }
        System.out.println("______________________________________________________________");
    }
}