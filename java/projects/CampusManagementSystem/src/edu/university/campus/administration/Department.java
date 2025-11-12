package edu.university.campus.administration;

import java.util.ArrayList;

import edu.university.campus.academics.Course;
import edu.university.campus.people.Professor;
import edu.university.campus.people.Student;

public class Department {
  private String name;
  private ArrayList<Course> courses = new ArrayList<Course>();
  private ArrayList<Professor> professors = new ArrayList<Professor>();
  private ArrayList<Student> students = new ArrayList<Student>();

  public Department(String name, ArrayList<Course> courses, ArrayList<Professor> professors,
      ArrayList<Student> students) {
    this.name = name;
    this.courses = courses;
    this.professors = professors;
    this.students = students;
  }

  public Department() {
    this.name = "";
    this.courses = new ArrayList<Course>();
    this.professors = new ArrayList<Professor>();
    this.students = new ArrayList<Student>();
  }

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public ArrayList<Course> getCourses() {
    return courses;
  }

  public void setCourses(ArrayList<Course> courses) {
    this.courses = courses;
  }

  public ArrayList<Professor> getProfessors() {
    return professors;
  }

  public void setProfessors(ArrayList<Professor> professors) {
    this.professors = professors;
  }

  public ArrayList<Student> getStudents() {
    return students;
  }

  public void setStudents(ArrayList<Student> students) {
    this.students = students;
  }

  public void addCourse(Course course) {
    courses.add(course);
  }

  public void assignProfessor(Professor professor, Course course) {
    course.assignInstructor(professor);
  }

  @Override
  public String toString() {
    return "Department [name=" + name + ", courses=" + courses + ", professors=" + professors + ", students=" + students
        + "]";
  }

  @Override
  public boolean equals(Object obj) {
    if (this == obj)
      return true;
    if (obj == null)
      return false;
    if (getClass() != obj.getClass())
      return false;
    Department other = (Department) obj;
    if (name == null) {
      if (other.name != null)
        return false;
    } else if (!name.equals(other.name))
      return false;
    if (courses == null) {
      if (other.courses != null)
        return false;
    } else if (!courses.equals(other.courses))
      return false;
    if (professors == null) {
      if (other.professors != null)
        return false;
    } else if (!professors.equals(other.professors))
      return false;
    if (students == null) {
      if (other.students != null)
        return false;
    } else if (!students.equals(other.students))
      return false;
    return true;
  }
}
