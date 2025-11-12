package edu.university.campus;

import edu.university.campus.menu.*;

public class Main {
  public static void main(String[] args) {
    new MenuManager().start(new MainMenu());
  }
}
