import java.util.Scanner;

public class ChangeMachine {

    public static void main(String[] args) {
        int changeAmount = 1;
        int quartersAmount = 0;
        int dimesAmount = 0;
        int nickelsAmount = 0;
        int penniesAmount = 0;
        int dollarsAmount = 0;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of pennies to be converted: ");
        changeAmount = sc.nextInt();
        if (changeAmount == 0) {
            System.out.println("No Change");
        }
        while (changeAmount -100 >= 0) {
            changeAmount -= 100;
            dollarsAmount += 1;
        }
        while (changeAmount - 25 >= 0) {
            changeAmount -= 25;
            quartersAmount += 1;
        }
        while (changeAmount - 10 >= 0) {
            changeAmount -= 10;
            dimesAmount += 1;
        }
        while (changeAmount - 5 >= 0) {
            changeAmount -= 5;
            nickelsAmount += 1;
        }
        while (changeAmount - 1 >= 0) {
            changeAmount -= 1;
            penniesAmount += 1;
        }

        if (dollarsAmount > 0) {
            System.out.print(dollarsAmount + " Dollar");
            if (dollarsAmount > 1) {
                System.out.println("s");
            } else {
                System.out.println();
            }
        }
        if (quartersAmount > 0) {
            System.out.print(quartersAmount + " Quarter");
            if (quartersAmount > 1) {
                System.out.println("s");
            } else {
                System.out.println();
            }
        }
        if (dimesAmount > 0) {
            System.out.print(dimesAmount + " Dime");
            if (dimesAmount > 1) {
                System.out.println("s");
            } else {
                System.out.println();
            }
        }
        if (nickelsAmount > 0) {
            System.out.print(nickelsAmount + " Nickel");
            if (nickelsAmount > 1) {
                System.out.println("s");
            } else {
                System.out.println();
            }
        }
        if (penniesAmount > 0) {
            System.out.print(penniesAmount + " Penn");
            if (penniesAmount > 1) {
                System.out.println("ies");
            } else {
                System.out.println("y");
            }
        }
        sc.close();
    }
}