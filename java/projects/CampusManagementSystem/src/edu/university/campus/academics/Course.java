package edu.university.campus.academics;

import java.util.ArrayList;

import edu.university.campus.people.Professor;
import edu.university.campus.people.Student;

public class Course {
  String code;
  String title;
  int credits;
  Professor instructor;
  ArrayList<Student> students = new ArrayList<Student>();
  ArrayList<Assignment> assignments = new ArrayList<Assignment>();
  ArrayList<Exam> exams = new ArrayList<Exam>();

  public Course(String code, String title, int credits, Professor instructor, ArrayList<Student> students,
      ArrayList<Assignment> assignments, ArrayList<Exam> exams) {
    this.code = code;
    this.title = title;
    this.credits = credits;
    this.instructor = instructor;
    this.students = students;
    this.assignments = assignments;
    this.exams = exams;
  }

  public Course() {
    this.code = "";
    this.title = "";
    this.credits = 0;
    this.instructor = new Professor();
    this.students = new ArrayList<Student>();
    this.assignments = new ArrayList<Assignment>();
    this.exams = new ArrayList<Exam>();
  }

  public String getCode() {
    return code;
  }

  public void setCode(String code) {
    this.code = code;
  }

  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public int getCredits() {
    return credits;
  }

  public void setCredits(int credits) {
    this.credits = credits;
  }

  public Professor getInstructor() {
    return instructor;
  }

  public void setInstructor(Professor instructor) {
    this.instructor = instructor;
  }

  public ArrayList<Student> getStudents() {
    return students;
  }

  public void setStudents(ArrayList<Student> students) {
    this.students = students;
  }

  public ArrayList<Assignment> getAssignments() {
    return assignments;
  }

  public void setAssignments(ArrayList<Assignment> assignments) {
    this.assignments = assignments;
  }

  public ArrayList<Exam> getExams() {
    return exams;
  }

  public void setExams(ArrayList<Exam> exams) {
    this.exams = exams;
  }

  public void enroll(Student student) {
    students.add(student);
  }

  public void assignInstructor(Professor professor) {
    this.setInstructor(professor);
  }

  @Override
  public String toString() {
    return "Course [code=" + code + ", title=" + title + ", credits=" + credits + ", instructor="
        + instructor + ", students=" + students + ", assignments=" + assignments + ", exams=" + exams + "]";
  }

  @Override
  public boolean equals(Object obj) {
    if (this == obj)
      return true;
    if (obj == null)
      return false;
    if (getClass() != obj.getClass())
      return false;
    Course other = (Course) obj;
    if (code == null) {
      if (other.code != null)
        return false;
    } else if (!code.equals(other.code))
      return false;
    if (title == null) {
      if (other.title != null)
        return false;
    } else if (!title.equals(other.title))
      return false;
    if (credits != other.credits)
      return false;
    if (instructor == null) {
      if (other.instructor != null)
        return false;
    } else if (!instructor.equals(other.instructor))
      return false;
    if (students == null) {
      if (other.students != null)
        return false;
    } else if (!students.equals(other.students))
      return false;
    if (assignments == null) {
      if (other.assignments != null)
        return false;
    } else if (!assignments.equals(other.assignments))
      return false;
    if (exams == null) {
      if (other.exams != null)
        return false;
    } else if (!exams.equals(other.exams))
      return false;
    return true;
  }

}