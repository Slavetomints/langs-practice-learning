package edu.university.campus.menu;

import edu.university.campus.io.ConsoleUtils;

public class MainMenu implements Menu {

  @Override
  public void display() {
    ConsoleUtils.clearScreen();
    System.out.println("=== UNIVERSITY MAINFRAME ===");
    System.out.println("[1] Departments");
    System.out.println("[2] Students");
    System.out.println("[3] Professors");
    System.out.println("[0] Exit");
    System.out.print("Select: ");
  }

  @Override
  public Menu handleInput(String input) {
    switch (input) {
      case "1":
        return new DepartmentMenu();
      case "2":
        return new StudentMenu();
      case "3":
        return new ProfessorMenu();
      case "0":
        ConsoleUtils.clearScreen();
        return null;
      default:
        System.out.println("Invalid selection. Try again.");
        return this;
    }
  }
}
