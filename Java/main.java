
import java.util.Scanner;

class Calc {

    void add(int a, int b) {

        System.out.println("Sum: " + (a + b));

    }

    void sub(int a, int b) {

        System.out.println("Difference: " + (a - b));

    }

    void mul(int a, int b) {

        System.out.println("Product: " + (a * b));

    }

    void div(int a, int b) {

        System.out.println("Quotient: " + (a / b));

    }

}

public class main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Calc obj = new Calc();

        System.out.println("Enter first number: ");
        int a = sc.nextInt();

        System.out.println("Enter second number: ");
        int b = sc.nextInt();

        System.out.println("\n 1.. Addition \n 2.. Subtraction \n 3.. Multiplication \n 4.. Division");

        int choice = sc.nextInt();

        switch (choice) {

            case 1:
                obj.add(a, b);
                break;

            case 2:
                obj.sub(a, b);
                break;

            case 3:
                obj.mul(a, b);
                break;

            case 4:
                obj.div(a, b);
                break;

            default:
                System.out.println("Invalid choice");

        }
        sc.close();
    }

}
