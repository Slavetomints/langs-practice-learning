package edu.university.campus.menu;

import edu.university.campus.io.ConsoleUtils;

public class ProfessorMenu implements Menu {
  
  @Override
  public void display() {
    ConsoleUtils.clearScreen();
    System.out.println("=== PROFESSOR MENU ===");
    System.out.println("[1] View Professor");
    System.out.println("[2] Add Professor");
    System.out.println("[3] Remove Professor");
    System.out.println("[4] Edit Professor");
    System.out.println("[9] Back");
    System.out.print("Select: ");
  }

  @Override
  public Menu handleInput(String input) {
    switch (input) {
      case "1":
        System.out.println("Viewing professor");
        return this;
      case "2":
        System.out.println("Adding professor");
        return this;
      case "3":
        System.out.println("Removing professor");
        return this;
      case "0":
        return null;
      default:
        System.out.println("Invalid selection. Try again.");
        return this;
    }
  }
}
