
/*
 * 3. Write a Java program to read an integer via argument, let the variable be n, and output a Fibonacci series of length n.
 */

public class third {
    public static void main(String[] args) {
        if (args.length == 1) {
            return;
        }
        int n = Integer.parseInt(args[0]);
        if (n == 1) {
            System.out.println(n);
        }
        if (n == 2) {
            System.out.println("1 1");
        } else {
            n -= 2;
            int a = 1;
            int b = 1;
            String str = "\n";
            int fib = a + b;
            System.out.println(fib + " " + (str.charAt((n == 1) ? 1 : 0)));
            a = b;
            b = fib;
            n--;
        }

    }

}
