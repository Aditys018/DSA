import java.util.LinkedList;

class program541
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

        Integer Ret = lobj.get(1);

        System.out.println("Retrived element is "+Ret);

        for(Integer no : lobj)
        {
            System.out.println(no);
        }

        lobj.clear();
    }
}