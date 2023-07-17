
public class Chid extends Add {
    public static void main(String[] args) {
        Chid chid = new Chid();
        int i = chid.addi(5, 6);
        System.out.println(i);
    }

    @Override
    public int addi(int a, int b) {
        return a + b;
    }

}
