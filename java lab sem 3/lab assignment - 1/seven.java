import java.util.*;

public class seven {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        int n = s.length();
        int num = 0;
        int j = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s.charAt(i) != '0' && s.charAt(j) != '1') {

                System.out.println("Input is not in proper format");
                return;
            }
            num += (s.charAt(i) - '0') * Math.pow(2, j);
            j++;
        }
        System.out.println("the binary is " + num);
    }
}
