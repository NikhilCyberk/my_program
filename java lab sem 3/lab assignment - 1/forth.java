/*
 * Write a Java program to read an entire integer array from argument, implement Insertion sort to sort
the array, and output the sorted array, i.e. if user provides output as “java Main 23 12 56 79 30” and
you will have to output “12 23 30 56 79”.
 */

public class forth {
    public static void main(String[] args) {
        int l = args.length;
        int a[] = new int[l];
        for (int i = 0; i < l; i++) {
            a[i] = Integer.parseInt(args[i]);
        }
        for (int i = 1; i < l; i++) {
            int k = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > k) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = k;
        }

        for (int j = 0; j < l; j++) {
            System.out.print(a[j] + " ");
        }

        System.out.println();
    }
}
