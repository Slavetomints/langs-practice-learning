import java.util.Scanner;

public class Interstate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int interstateNumber = 0;
        interstateNumber = sc.nextInt();
        // check if primary
        if (interstateNumber > 0 && interstateNumber < 100) {
            // check if N/S or E/W
            if ((interstateNumber % 5 == 0) && (interstateNumber % 10 != 0)) {
                System.out.println("I-" + interstateNumber + " is a north/south primary Interstate");
            } else {
                System.out.println("I-" + interstateNumber + " is a east/west primary Interstate");
            }
            // check if auxiliary
        } else if ((interstateNumber > 99) && (interstateNumber % 100 != 0) && (interstateNumber < 1000)) {
            System.out.println("I-" + interstateNumber + " is a auxillary interstate that serves I-" + (interstateNumber % 100));
         // catch all
        } else {
            System.out.println(interstateNumber + " is not a valid interstate highway number");
        }
        sc.close();
    }
}