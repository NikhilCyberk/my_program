/*
 * 1. Write a Java program to read an integer as input from user, and output whether the number is prime
    or composite.
 * 
 */

import java.util.*;

public class first {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter an integer");
        int number = scanner.nextInt();

        if (isPrime(number)) {
            System.out.println(number + " is a prime number ");
        } else {
            System.out.println(number + " is a composite number");
        }
        scanner.close();
    }

    public static boolean isPrime(int number) {
        if (number <= 1) {
            return false;
        }
        if (number <= 3) {
            return true;
        }
        if (number % 2 == 0 || number % 3 == 0) {
            return false;
        }

        for (int i = 5; i * i <= number; i++) {
            if (number % i == 0 || number % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}