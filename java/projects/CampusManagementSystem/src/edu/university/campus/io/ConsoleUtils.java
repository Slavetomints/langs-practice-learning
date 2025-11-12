package edu.university.campus.io;

import java.io.IOException;

public class ConsoleUtils {
  public static void clearScreen() {
    try {
      if (System.getProperty("os.name").toLowerCase().contains("windows")) {
        new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
      } else {
        System.out.print("\033[H\033[2J");
        System.out.flush();
      }
    } catch (IOException | InterruptedException e) {
      System.out.println("\n".repeat(50));
    }
  }
}
