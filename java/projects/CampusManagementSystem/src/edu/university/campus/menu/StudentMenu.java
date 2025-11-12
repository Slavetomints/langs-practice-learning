package edu.university.campus.menu;

import edu.university.campus.io.ConsoleUtils;

public class StudentMenu implements Menu {

  @Override
  public void display() {
    ConsoleUtils.clearScreen();
    System.out.println("=== STUDENT MENU ===");
    System.out.println("[1] View Student");
    System.out.println("[2] Add Student");
    System.out.println("[3] Remove Student");
    System.out.println("[4] Edit Student");
    System.out.println("[9] Back");
    System.out.print("Select: ");
  }

  @Override
  public Menu handleInput(String input) {
    switch (input) {
      case "1":
        System.out.println("Viewing student");
        return this;
      case "2":
        System.out.println("Adding student");
        return this;
      case "3":
        System.out.println("Removing student");
        return this;
      case "0":
        return null;
      default:
        System.out.println("Invalid selection. Try again.");
        return this;
    }
  }

}
