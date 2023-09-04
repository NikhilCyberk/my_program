import java.util.Scanner;

public class sixth {
    public static void main(String[] args) {
        int n = args.length;
        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(args[i]);
        }
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                System.out.println("found");
                return;
            }
        }
        System.out.println("not found");

    }

}
