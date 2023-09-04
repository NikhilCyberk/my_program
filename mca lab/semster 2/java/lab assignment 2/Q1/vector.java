import java.util.Vector;

/**
 * vector
 */
public class vector {
    private double[] elements;

    // constructor that take an aray as an input parameter
    public vector(double[] inputArray) {
        elements = new double[inputArray.length];
        System.arraycopy(inputArray, 0, elements, 0, elements.length);
    }

    // constructor that take another vector as an input parameter
    public vector(vector otherVector) {
        elements = new double[otherVector.elements.length];
        System.arraycopy(otherVector.elements, 0, elements, 0, otherVector.elements.length);
    }

    // Set the elements at specified index
    public void set(int index, double value) {
        if (index >= 0 && index < elements.length) {
            elements[index] = value;
        } else {
            throw new IndexOutOfBoundsException("Index is out of bounds");
        }
    }

    // get the elements at specified index
    public double get(int index) {
        if (index >= 0 && index < elements.length) {
            return elements[index];
        } else {
            throw new IndexOutOfBoundsException("Index is out of bounds");
        }
    }

    public static void main(String[] args) {
        double[] array = { 1, 2, 3, 4, 5, 6, 7 };
        vector vector1 = new vector(array);
        vector vector2 = new vector(vector1); // create a copy of the vector

        System.out.println("Array ");
        for (double d : array) {
            System.out.println(d);
        }
        System.out.println("vector 1 : ");
        System.out.println(vector1.get(0));
        System.out.println(vector1.get(1));
        System.out.println(vector1.get(2));
        System.out.println(vector1.get(3));
        System.out.println(vector1.get(4));
        System.out.println(vector1.get(5));
        System.out.println(vector1.get(6));

        vector1.set(0, 7);

        System.out.println("ater set new value : " + vector1.get(0));

        System.out.println("vector 2 : ");
        System.out.println(vector2.get(0));
        System.out.println(vector2.get(1));
        System.out.println(vector2.get(2));
        System.out.println(vector2.get(3));
        System.out.println(vector2.get(4));
        System.out.println(vector2.get(5));
        System.out.println(vector2.get(6));

    }
}
