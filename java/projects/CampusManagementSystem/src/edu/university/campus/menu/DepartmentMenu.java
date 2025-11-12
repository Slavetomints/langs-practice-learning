package edu.university.campus.menu;

import edu.university.campus.io.ConsoleUtils;

public class DepartmentMenu implements Menu {

  @Override
  public void display() {
    ConsoleUtils.clearScreen();
    System.out.println("=== DEPARTMENT MENU ===");
    System.out.println("[1] View Departments");
    System.out.println("[2] Add Department");
    System.out.println("[3] Remove Department");
    System.out.println("[4] Edit Department");
    System.out.println("[9] Back");
    System.out.print("Select: ");
  }

  @Override
  public Menu handleInput(String input) {
    switch (input) {
      case "1":
        System.out.println("Departments listed here...");
        return this;
      case "2":
        System.out.println("Department added!");
        return this;
      case "3":
        System.out.println("Removing department...");
        return this;
      case "4":
        System.out.println("Editing Department");
        return this;
      case "9":
        return new MainMenu();
      default:
        System.out.println("Invalid choice.");
        return this;
    }
  }

}
