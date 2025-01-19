import java.util.LinkedList;

class program545
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

        lobj.remove(2);

        System.out.println("Updated list");

        for(Integer no : lobj)
        {
            System.out.println(no);
        }

        System.out.println("Size of linkedlist is : "+lobj.size());

        lobj.clear();
    }
}