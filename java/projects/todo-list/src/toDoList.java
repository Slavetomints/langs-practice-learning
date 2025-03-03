import java.util.Scanner;
import java.util.ArrayList;


public class toDoList {

    private static ArrayList<String> toDoList = new ArrayList<String>();
    private static Scanner keyboard = new Scanner(System.in);
    private static LogFile log = new LogFile();
    private static ToDoFile toDoFile = new ToDoFile();

    public static void main(String[] args) throws Exception {
        clearScreen();
        title();
        toDoList = ToDoFile.createToDoArrayList();
        while (true) {
            int selection = menu();
            getMenuSelection(selection);
        }
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
        System.out.println("              Press enter to continue");
        keyboard.nextLine();
    }

    public static int menu() {
        clearScreen();
        int choice = 3;

        System.out.println("Please make a selection:");
        System.out.println("========================");
        System.out.println("1 - Add Item to List");
        System.out.println("2 - Remove Item from the List");
        System.out.println("3 - Show List");
        System.out.println("999 - Exit application\n");

        System.out.print("> ");
        try {
            choice = keyboard.nextInt();
            keyboard.nextLine();
            return choice;        
        } catch (Exception error) {
            keyboard.nextLine();
            log.logError(error);
            return menu();
        }
    }

    public static void getMenuSelection(int selection) {
        switch(selection) {
            case 1:
                clearScreen();
                addItem();
                break;
            case 2:
                clearScreen();
                removeItem();
                break;
            case 3:
                clearScreen();
                showList();
                break;
            case 999:
                toDoFile.closeWriter();
                clearScreen();
                goodbye();
                log.logAction("Program Exit with status code 0");
                log.closeWriter();
                System.exit(0);
                break;
            default:
                System.out.println("Invalid selection, please try again.");
                break;
        }
    }

    public static void clearScreen() {
        try {
            if (System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                new ProcessBuilder("clear").inheritIO().start().waitFor();
            }
        } catch (Exception error) {
            log.logError(error);
        }
    }

    public static void addItem() {
        String item;

        System.out.println("What do you want to add to the list?");
        item = keyboard.nextLine();
        toDoList.add(item);
        log.logAction(item + " added to to-do list");
        toDoFile.addItem(item);
    }

    public static void removeItem() {
        if (toDoList.isEmpty()) {
            log.logAction("Tried to remove item when list was empty");
            System.out.println("The list is empty. Nothing to remove.\n");
            System.out.println("Press enter to continue");
            keyboard.nextLine();
            return;
        }

        int removeIndex;

        showList();
        System.out.println("Please enter the number of the item you wish to remove");

        removeIndex = keyboard.nextInt();
        removeIndex = removeIndex - 1;
        if (removeIndex >= toDoList.size() || removeIndex < 0) {
            log.logAction("Attempted to remove invalid item.");
            System.out.println("Please select a valid number");
            removeItem();
            return;
        }

        String removedItem = toDoList.get(removeIndex);
        toDoList.remove(removeIndex);
        toDoFile.removeItem(removeIndex);
        log.logAction(removedItem + " removed from to-do list");
    }

    public static void showList() {
        if (toDoList.isEmpty()) {
            System.out.println("The list is empty.");
        } else {
            for (int i = 0; i < toDoList.size(); i++) {
                System.out.println((i + 1) + " - " + toDoList.get(i));
            }
        }
        System.out.println("\nPress enter to continue");
        keyboard.nextLine();
    }

    public static void goodbye() {
        keyboard.close();
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
