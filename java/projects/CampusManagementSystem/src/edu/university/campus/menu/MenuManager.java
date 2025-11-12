package edu.university.campus.menu;

import java.util.Scanner;

public class MenuManager {
  private final Scanner scanner = new Scanner(System.in);

  public void start(Menu startMenu) {
    Menu current = startMenu;

    while (current != null) {
      current.display();
      String input = scanner.nextLine().trim();
      current = current.handleInput(input);
    }

    System.out.println("Logging off mainframe...");
  }
}
