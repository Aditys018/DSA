package MajorProject.FileHandling;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Scanner;

class program480
{
    public static void main(String Arg[]) throws Exception
    {
        String DirName = "" , PackName = "" , Header = "";
        Scanner sobj = new Scanner(System.in) ;
        FileOutputStream fopackobj = null;
        int i = 0, j = 0,  iRet = 0;
        
        FileInputStream fiobj  = null;
        byte Buffer[] = new byte[1024];
        
       
        File Packobj = new File(PackName);

        System.out.println("---------------------------------------------------------------------");
        System.out.println("-------------- Packer Unpacker CUI Module ----------------");
        System.out.println("---------------------------------------------------------------------");
        
        

        System.out.println("---------------------------- Packing Activity -----------------------");

        System.out.println("Enter the name of directory that you want to open for packing : ");
        

        System.out.println("Enter the name of packed file that you want to create : ");
        

        
        boolean bret = false;

        bret = Packobj.createNewFile();
        if(bret == true)
        {
            System.out.println("Packed file gets succesfully created with the name : "+PackName);
        }
        else
        {
            System.out.println("Unable to proceed as pack file is not created");
            return;
        }

     new FileOutputStream(Packobj);

        File fobj = new File(DirName);

        if(fobj.exists())
        {
            System.out.println("Directory is succesfully opened");

            File Arr[] = fobj.listFiles();

            System.out.println("Total number of files in the Directory are : "+Arr.length);

            

            for(i = 0; i < Arr.length; i++)
            {
                Header = Arr[i].getName()+" "+Arr[i].length();
                
                for(j = Header.length(); j < 100; j++)
                {
                    Header = Header + " ";
                }

                fopackobj.write(Header.getBytes(),0,100);

               fiobj = new FileInputStream(Arr[i]);

               while((iRet = fiobj.read(Buffer)) != -1)
               {
                fopackobj.write(Buffer,0,iRet);
               }

               fiobj.close();
               Header = " ";
            }
        }
        else
        {
            System.out.println("There is no such director");
        }
        System.out.println("---------------------------------------------------------------------");
    }
}