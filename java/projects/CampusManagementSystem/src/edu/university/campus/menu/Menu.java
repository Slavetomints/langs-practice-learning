package edu.university.campus.menu;

public interface Menu {
  void display();

  Menu handleInput(String input);
}
