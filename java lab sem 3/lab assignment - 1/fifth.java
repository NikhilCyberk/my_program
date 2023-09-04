public class fifth {

    public static void main(String[] args) {
        String s = args[0];
        int n = s.length();
        int i = 0, f = 0;

        while (i < n / 2) {
            if (s.charAt(i) != s.charAt(n - i - 1)) {
                f++;
                break;
            }
            i++;
        }

        if (f == 0) {
            System.out.println("Palindrome");
        } else {
            System.out.println("Not a Palindrome");
        }
    }
}
