
import java.util.Scanner;
import java.io.File;
import java.time.*;
import java.time.format.DateTimeFormatter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

public class toDoList {

    // Initializing the file and the actual to do list to it can be referenced in multiple functions later. 
    static String toDoListFilePath = "../tmp/to_do_list.txt"; 
    static String logFilePath = "../tmp/log.txt";
    static ArrayList<String> toDoList = new ArrayList<String>();
    static File toDoListFile = new File(toDoListFilePath);
    static File logFile = new File(logFilePath);
    static FileWriter toDoFileWriter = null;
    static FileWriter logFileWriter = null;
    static Scanner keyboard = new Scanner(System.in);
    static String currentTime;


    public static void main(String[] args) throws Exception {
        clearScreen();
        title();
        initToDoListFiles();
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
        System.out.println("              Press enter to continue");
        keyboard.nextLine();
    }

    public static void initToDoListFiles() {
        try {
            logFileWriter = new FileWriter(logFilePath, true);

            currentTime = getCurrentTime();
            logFileWriter.write(currentTime + " - logFileWriter Initialized");

            toDoFileWriter = new FileWriter(toDoListFilePath, true);

            currentTime = getCurrentTime();
            logFileWriter.write(currentTime + " - toDoFileWriter Initialized");
        } catch (Exception error) {
            System.out.println("An error occurred");
            error.printStackTrace();
        }
    }

    public static void initToDoList() {
        try {
            // Check if the directory exists; if not, create it
            if (!toDoListFile.getParentFile().exists()) {
                toDoListFile.getParentFile().mkdirs();
            }
    
            // Check if the file exists; if not, create it
            if (!toDoListFile.exists()) {
                toDoListFile.createNewFile();
                currentTime = getCurrentTime();
                logFileWriter.write(currentTime + " - To-Do List file created at: " + toDoListFile.getAbsolutePath());
            }
    
            // Read the file and populate the to-do list
            Scanner reader = new Scanner(toDoListFile);
            while (reader.hasNextLine()) {
                String item = reader.nextLine();
                toDoList.add(item);
            }
            reader.close();
            
            currentTime = getCurrentTime();
            logFileWriter.write(currentTime + " - To-Do List initialized");
        } catch (IOException error) {
            System.out.println("An error occurred");
            error.printStackTrace();
        }
    }
    

    public static int menu() {
        clearScreen();
        // Initialize the choice integer that will be used to return the menu selection. It is initialized to 3 so that 
        // if for some reason it isn't changed all that happens is that the list is shown and no edits will be made to it
        int choice = 3;

        // Print the menu options onto the screen
        System.out.println("Please make a selection:");
        System.out.println("========================");
        System.out.println("1 - Add Item to List");
        System.out.println("2 - Remove Item from the List");
        System.out.println("3 - Show List");
        System.out.println("999 - Exit application\n");

        // Gather the input and throw away the newline, and return the input in the integer choice
        System.out.print("> ");
        try {
            choice = keyboard.nextInt();
            keyboard.nextLine();
            return choice;        
        } catch (Exception e) {
            keyboard.nextLine();
            return menu();
        }
    }

    public static void getMenuSelection(int selection) {
        switch(selection) {
            case 1:
                clearScreen();
                addItem();
                getMenuSelection(menu());
            case 2:
                clearScreen();
                removeItem();
                getMenuSelection(menu());
            case 3:
                clearScreen();
                showList();
                getMenuSelection(menu());
            case 999:
                clearScreen();
                goodbye();
                System.exit(0);
            default:
                getMenuSelection(menu());
        }
    }

    public static void clearScreen() {
        try {
            if (System.getProperty("os.name").contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                new ProcessBuilder("clear").inheritIO().start().waitFor();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void addItem() {
        String item;

        System.out.println("What do you want to add to the list?");
        item = keyboard.nextLine();
        toDoList.add(item);
        currentTime = getCurrentTime();
        /*logFileWriter.write(currentTime + " - toDoFileWriter Initialized");
        /* 
         * 
         * 


MAKE A LOG FUNCTION THAT IS PASSED A STRING TO LOG THAT STRING INTO THE FILE

MAKE A LOG FUNCTION THAT IS PASSED THE ERROR TO LOG THE ERRORS INTO THE FILE






         */
    }

    public static void removeItem() {
        if (toDoList.isEmpty()) {
            System.out.println("The list is empty. Nothing to remove.\n");
            System.out.println("Press enter to continue");
            keyboard.nextLine();
            getMenuSelection(menu());
        }
        int removeIndex;

        showList();
        System.out.println("Please enter the number of the item you wish to remove");

        removeIndex = keyboard.nextInt();
        removeIndex = removeIndex - 1;
        if (removeIndex > toDoList.size() || removeIndex < 0) {
            System.out.println("Please select a valid number");
            removeItem();
        }
        
        toDoList.remove(removeIndex);
    }

    public static void showList() {
        for (int i = 0; i < toDoList.size(); i++) {
            System.out.println((i + 1) + " - " + toDoList.get(i));
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

    private static String getCurrentTime() {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        LocalDateTime now = LocalDateTime.now();
        return now.format(formatter);
    }
}
