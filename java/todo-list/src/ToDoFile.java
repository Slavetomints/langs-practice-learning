import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class ToDoFile {
    
    private static String toDoFilePath;
    private static File toDoFile;
    private static FileWriter toDoFileWriter;
    private static LogFile log = new LogFile();


    public ToDoFile() {
        try {
            toDoFilePath = "tmp/to_do_list.txt";
            toDoFile = new File(toDoFilePath);
            toDoFileWriter = new FileWriter(toDoFile, true);
            
            // Check if the directory exists; if not, create it
            if (!toDoFile.getParentFile().exists()) {
                toDoFile.getParentFile().mkdirs();
            }
    
            // Check if the file exists; if not, create it
            if (!toDoFile.exists()) {
                toDoFile.createNewFile();
                log.logAction("To Do File created");
            }
    

        } catch (IOException error) {
            System.out.println("An error occurred");
            log.logError(error);
        }
    }

    public void addItem(String item) {
        try {
            toDoFileWriter.write(item + "\n");
            log.logAction(item + " added to to-do file");
        } catch (Exception error) {
            log.logError(error);
        }
    }

    public void removeItem(int item_index) {
        // Read the lines into an ArrayList
        ArrayList<String> lines = new ArrayList<>();
        try {
            Scanner reader = new Scanner(toDoFile);
            while (reader.hasNextLine()) {
                lines.add(reader.nextLine());
            }
            reader.close();
            
            // Check if the index is valid
            if (item_index >= 0 && item_index < lines.size()) {
                // Remove the line at the given index
                lines.remove(item_index);
                // Write the updated list of lines back to the file
                FileWriter writer = new FileWriter(toDoFile);
                for (String line : lines) {
                    writer.write(line + "\n");
                }
                writer.close();
                log.logAction("Item at index " + item_index + " removed from to-do file");
            } else {
                System.out.println("Invalid index: " + item_index);
            }
        } catch (IOException error) {
            System.out.println("An error occurred while removing an item");
            log.logError(error);
        }
    }

    public ArrayList<String> createToDoArrayList() {
        ArrayList<String> toDoList = new ArrayList<String>();

        try {
            Scanner reader = new Scanner(toDoFile);
            while (reader.hasNextLine()) {
                String item = reader.nextLine();
                toDoList.add(item);
                log.logAction(item + " added to Array List in initialization");
            }
            reader.close();
        } catch (Exception error) {
            System.out.println("An error occurred while creating the to-do list");
            log.logError(error);
        }
        return toDoList;
    }

    public void closeWriter() {
        try {
            if (toDoFileWriter != null) {
                toDoFileWriter.close();
                log.logAction("Closed to-do file writer");
            }
        } catch (IOException e) {
            System.out.println("An error occurred when closing the log file writer.");
            e.printStackTrace();
        }
    }
}
