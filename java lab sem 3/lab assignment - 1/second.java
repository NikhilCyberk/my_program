/*
 * 
 * 2. Write a Java program to read an integer as input from user, and output its factorial .
 */

import java.util.*;

public class second {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a number : ");

        int n = scanner.nextInt();
        int fact = 1;
        for (int i = 1; i < n; i++) {
            fact = fact * i;
        }

        System.out.println(fact + " is the factorial of " + n);

        scanner.close();

    }
}
