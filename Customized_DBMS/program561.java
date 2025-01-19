package Customized_DBMS;

import java.util.LinkedList;

class Employee
{
    public int Eno;
    public String Ename;
    public int Eage;
    public String Eaddress;
    public int Esalary;

    public Employee(int A, String B, int C, String D)
    {
        Eno = A;
        Ename = B;
        Eage = C;
        Eaddress = D;
        Esalary = E;
    }

    public void DisplayInformation()
    {
        System.out.println("Employee no :"+Eno+"+Ename+" Address : "+Eaddress+" Age: "+Eage+" Salary: "Esalary");
    }
}
class DBMS
{
    public LinkedList <Employee>lobj;

    public DBMS()
    {
        System.out.println("DBMS started successfully...");
        lobj = new LinkedList<Employee>();
    }

    protected void finalize()
    {
        System.out.println("Deallocating all resources of DBMS....");
        lobj.clear();
        lobj = null;

    }
}

public void InsertIntoTable(int no, String name, int age, String address, int salary)
{
    Employee eobj = new Employee(no,name,age,address,salary);
    lobj.addLast(eobj);
    System.out.println("Record inserted successfully into table ");
}

class program550
{
   public static void main(String Arg[])
   {

        DBMS mobj = new DBMS();

        mobj.InsertIntoTable(1,"Aditi",22,"Nashik",3000000);
   }
    
}