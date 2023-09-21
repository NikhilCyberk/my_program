class Concrete2 implements Iface1, Iface2 {
    public void im1() {
        System.out.println("Implemented method im1() in Concrete2");
    }
    public void im2() {
        System.out.println("Implemented method im1() in Concrete2");
    }

    public void dm1() {
        System.out.println("Overridden method dm1() in Concrete2");
    }
}