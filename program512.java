

class node
{
    public int data;
    public node next;

    public node(int x)
    {
        data = x;
        next = null;
    }
}

class SinglyLL
{
    public node head;
    public int iCount;

    public SinglyLL()
    {
        this.head = null;
        this.iCount = 0;
    }

    public void push(int no)
    {
        node newn = null;

        node = new node(no);
        newn.data = no;
        newn.next = null;

        if(head == null)
        {
            head = newn;
        }
        else
        {
            newn.next = head;
            head = newn;
        }
        iCount++;
    }
}



public void Display()
{
    System.out.println("Elements of the stack are: ");

    node temp = head;

    while(temp != null)
    {
        System.out.print(temp.data);
        temp = temp.next;
    }
    System.out.println("null");
}
 public int Count()
 {
    return iCount;
 }

class program512
{
    public static void main(String Arg[])
    {
       SinglyLL sobj = new SinglyLL();

       sobj.InsertFirst(51);
       sobj.InsertFirst(21);
       sobj.InsertFirst(11);

       sobj.InsertLast(101);
       sobj.InsertLast(111);
       sobj.InsertLast(151);

       sobj.Display();
       iRet = sobj.Count();

       System.out.println("Number of elements in the LinkedList are: "+iRet);

    }
}