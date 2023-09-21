

class Concrete implements Iface1 {
    
    public void im1() {
        System.out.println("Implemented method im1() in Concrete");
    }
}

class Concrete2 implements Iface1 {
    public void im1() {
        System.out.println("Implemented method im1() in Concrete2");
    }

    public void dm1() {
        System.out.println("Overridden method dm1() in Concrete2");
    }
}

public class ques1 {
    public static void main(String[] args) {
        Iface1 concreteObject = Iface1.createConcrete();
        concreteObject.im1(); // Invoke im1() from Concrete
        concreteObject.dm1(); // Invoke dm1() from Iface1 default method

        Iface1 concrete2Object = Iface1.createConcrete2();
        concrete2Object.im1(); // Invoke im1() from Concrete2
        concrete2Object.dm1(); // Invoke overridden dm1() from Concrete2
    }
}