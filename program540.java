import java.util.LinkedList;

class program540
{
    public static void main(String Arg[])
    {
        LinkedList <Integer>lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);


        lobj.add(101);
        lobj.add(111);
        lobj.add(121);

        lobj.add(3,75);

        for( Integer no : lobj)
        {
            System.out.println(no);
        }

        boolean bRet = lobj.contains(75);

        if(bRet == true)
        {
            System.out.println("Element is present");
        }
        else{
        System.out.println("There is no such element");
        }

        System.out.println(lobj);
    }
}