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


class program549
{
   public static void main(String Arg[])
   {

        LinkedList <Employee>lobj = new LinkedList<Employee>();


        Employee eobj1 = new Employee(1,"Aditi",22,"Hyderabad", 3000000);
        Employee eobj2 = new Employee(2,"Aditya",22,"Bangalore", 2000000);
        Employee eobj3 = new Employee(3,"Adit",22,"Pune", 1000000);



        lobj.add(eobj1);
        lobj.add(eobj2);
        lobj.add(eobj3);

        for(Employee eref : lobj)
        {
            eref.DisplayInformation();
        }
   }
    
}