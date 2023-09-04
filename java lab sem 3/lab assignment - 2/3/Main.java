/*
 *  Implement a class named Employee with four properties name, id, office and designation. This class
 *  must have a single constructor setting these four properties (use this keyword). This class has two
 *  subclasses Developer and Manager. They must also have their own constructors taking only name, id
 *  and office. They will set the designation to “developer” and “manager” respectively.
 * 
 */
class Employee
{
    String name;    String id;    String office;    String designation;

    Employee(String N,String I,String O,String D)
    {
        this.name=N;this.id=I;this.office=O;this.designation=D;
    }
}
class Developer extends Employee
{
    Developer(String N,String I,String O)
    {
        super(N,I,O,"developer");
    }
}
class Manager extends Employee
{
    Manager(String N,String I,String O)
    {
        super(N,I,O,"Manager");
    }
}


/**
 * Main
 */
public class Main {

    public static void main(String[] args) {

        
        
    }
    
}