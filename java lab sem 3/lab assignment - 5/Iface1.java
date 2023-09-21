interface Iface1 {
    void im1(); // Undefined method

    default void dm1() {
        System.out.println("Default method dm1() in Iface1");
    }

    private void privateMethod() {
        System.out.println("Private method in Iface1");
    }
}