
import java.util.Scanner;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;

public class toDoList {

    // Initializing the file and the actual to do list to it can be referenced in multiple functions later. 
    static ArrayList<String> toDoList = new ArrayList<String>();
    static File toDoListFile = new File("tmp/to_do_list.txt");
    public static void main(String[] args) throws Exception {
        title();
        initToDoList();
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

    public static void initToDoList() {
        try {
            Scanner reader = new Scanner(toDoListFile);
            while (reader.hasNextLine()) {
                String item = reader.nextLine();
                toDoList.add(item);
            }
            reader.close();
            System.out.println("To-Do List initialized");
        } catch (IOException error) {
            System.out.println("An error occurred");
            error.printStackTrace();
        }
    }

    public static int menu() {
        // Initialize the scanner object that is going to be used to gather the menu input
        // and the choice integer that will be used to return the menu selection. It is initialized to 3 so that 
        // if for some reason it isn't changed all that happens is that the list is shown and no edits will be made to it
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
        switch(selection) {
            case 1:
                addItem();
                menu();
            case 2:
                removeItem();
                menu();
            case 3:
                showList();
                menu();
            case 999:
                goodbye();
            default:
                System.out.println("Please make a valid selection");
                menu();
        }
    }

    public static void addItem() {
        Scanner keyboard = new Scanner(System.in);

        System.out.println("What do you want to add to the list?");
        toDoList.add(keyboard.nextLine());
        keyboard.close();
        showList();
    }

    public static void removeItem() {
        Scanner keyboard = new Scanner(System.in);
        int removeIndex;

        showList();
        System.out.println("Please enter the number of the item you wish to remove");

        removeIndex = keyboard.nextInt();
        if (removeIndex > toDoList.size() || removeIndex < 0) {
            System.out.println("Please select a valid numver");
            keyboard.close();
            removeItem();
        }
        
        toDoList.remove(keyboard.nextInt());
        keyboard.close();
    }

    public static void showList() {
        for (int i = 0; i < toDoList.size(); i++) {
            System.out.println((i + 1) + " - " + toDoList.get(i));
          }
    }

    public static void goodbye() {
        System.out.println("\r\n" + //
                        "\r\n" + //
                        " _____ _           _   _          _    _ _   _____     _ _        _ \r\n" + //
                        "|_   _| |__   __ _| |_( )___     / \\  | | | |  ___|__ | | | _____| |\r\n" + //
                        "  | | | '_ \\ / _` | __|// __|   / _ \\ | | | | |_ / _ \\| | |/ / __| |\r\n" + //
                        "  | | | | | | (_| | |_  \\__ \\  / ___ \\| | | |  _| (_) | |   <\\__ \\_|\r\n" + //
                        "  |_| |_| |_|\\__,_|\\__| |___/ /_/   \\_\\_|_| |_|  \\___/|_|_|\\_\\___(_)\r\n" + //
                        "\r\n" + //
                        "");
    }
}
