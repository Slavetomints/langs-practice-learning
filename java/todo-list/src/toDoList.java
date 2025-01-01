
import java.util.Scanner;

public class toDoList {
    public static void main(String[] args) throws Exception {
                        title();
                        getMenuSelection(menu());
                        goodbye();
    }

    public static void title() {
        System.out.println("\r\n" + //
                        "\r\n" + //
                        " _____           ____          _     _     _   \r\n" + //
                        "|_   _|__       |  _ \\  ___   | |   (_)___| |_ \r\n" + //
                        "  | |/ _ \\ _____| | | |/ _ \\  | |   | / __| __|\r\n" + //
                        "  | | (_) |_____| |_| | (_) | | |___| \\__ \\ |_ \r\n" + //
                        "  |_|\\___/      |____/ \\___/  |_____|_|___/\\__|  v0.1.0\r\n" + //
                        "\r\n" + //
                        "");
    }
    public static int menu() {
        // Initialize the scanner object that is going to be used to gather the menu input
        // and the choice integer that will be used to return the menu selection. It is preinitialized to 3 so that 
        // if for some reason it isnt changed all that happens is that the list is shown and no edits will be made to it
        Scanner keyboard = new Scanner(System.in);
        int choice = 3;

        // Print the menu options onto the screen
        System.out.println("Please make a selection:");
        System.out.println("========================");
        System.out.println("1 - Add Item to List");
        System.out.println("2 - Remove Item from the List");
        System.out.println("3 - Show List");
        System.out.println("999 - Exit application");

        // Gather the input and close the scanner object, and return the input in the integer choice
        choice = keyboard.nextInt();
        keyboard.close();
        return choice;
    }

    public static void getMenuSelection(int selection) {
        
    }

    public static void goodbye() {

    }
}
