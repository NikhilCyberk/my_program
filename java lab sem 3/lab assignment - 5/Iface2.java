interface Iface2 {
    void im1(); // Undefined method

    void im2(); // Undefined method

    default void dm1() {
        System.out.println("Default method dm1() in Iface2");
    }
}
