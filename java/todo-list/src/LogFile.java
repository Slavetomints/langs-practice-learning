import java.time.*;
import java.time.format.DateTimeFormatter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class LogFile {

    private static String logFilePath;
    private static File logFile;
    private static FileWriter logFileWriter;

    public LogFile() {
        try {
            logFilePath = "tmp/log.txt";
            logFile = new File(logFilePath);
            logFileWriter = new FileWriter(logFile, true);

            if (!logFile.getParentFile().exists()) {
                logFile.getParentFile().mkdirs();
            }

            if (!logFile.exists()) {
                logFile.createNewFile();
                logAction("Log File Initialized");
            }

        } catch (Exception error) {
            System.out.println("An error occurred when setting up the log file.");
            error.printStackTrace();
        }
    }

    public void logAction(String action) {
        try {
            String time = getCurrentTime();
            logFileWriter.write(time + " - " + action + "\n");
        } catch (Exception error) {
            System.out.println("An error occurred when writing to log file");
            logError(error);
        }
    }

    public void logError(Exception error) {
        try {
            String time = getCurrentTime();
            logFileWriter.write(time + " - " + error + "\n");
        } catch (Exception writeError ) {
            System.out.println("An error occurred when writing an error to the log file");
            writeError.printStackTrace();
            System.exit(-1);
        }

    }

    private static String getCurrentTime() {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss.NNNNNNNNN");
        LocalDateTime now = LocalDateTime.now();
    return now.format(formatter);
    }

    public void closeWriter() {
        try {
            if (logFileWriter != null) {
                logFileWriter.close();
            }
        } catch (IOException e) {
            System.out.println("An error occurred when closing the log file writer.");
            e.printStackTrace();
        }
    }
}
