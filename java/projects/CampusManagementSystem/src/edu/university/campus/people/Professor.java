package edu.university.campus.people;

import edu.university.campus.academics.Course;
import edu.university.campus.administration.Department;

public class Professor extends Person {

  String title;
  Department department;

  public Professor(String name, String id, String email, String title, Department department) {
    super(name, id, email);
    this.title = title;
    this.department = department;
  }

  public Professor() {
    super();
    this.title = "";
    this.department = new Department();
  }

  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public Department getDepartment() {
    return department;
  }

  public void setDepartment(Department department) {
    this.department = department;
  }

  public void teach(Course course) {
    course.assignInstructor(this);
  }

  @Override
  public String toString() {
    return "Professor [name=" + name + ", id=" + id + ", email=" + email + ", title=" + title + ", department="
        + department + "]";
  }

  @Override
  public boolean equals(Object obj) {
    if (this == obj)
      return true;
    if (!super.equals(obj))
      return false;
    if (getClass() != obj.getClass())
      return false;
    Professor other = (Professor) obj;
    if (title == null) {
      if (other.title != null)
        return false;
    } else if (!title.equals(other.title))
      return false;
    if (department == null) {
      if (other.department != null)
        return false;
    } else if (!department.equals(other.department))
      return false;
    return true;
  }

}
