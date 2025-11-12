package edu.university.campus.administration;

import java.util.ArrayList;

import edu.university.campus.exceptions.DepartmentNotFoundException;

public class University {
  private String name;
  private ArrayList<Department> departments = new ArrayList<Department>();

  public String getName() {
    return name;
  }

  public University(String name, ArrayList<Department> departments) {
    this.name = name;
    this.departments = departments;
  }

  public University() {
    this.name = "";
    this.departments = new ArrayList<Department>();
  }

  public void setName(String name) {
    this.name = name;
  }

  public ArrayList<Department> getDepartments() {
    return departments;
  }

  public void setDepartments(ArrayList<Department> departments) {
    this.departments = departments;
  }

  public void addDepartment(Department department) {
    departments.add(department);
  }

  public Department findDepartment(String name) throws DepartmentNotFoundException {
    for (int i = 0; i < departments.size(); i++) {
      if (departments.get(i).getName().equals(name)) {
        return departments.get(i);
      }
    }
    throw new DepartmentNotFoundException("Department not found: " + name);
  }

  @Override
  public String toString() {
    return "University [name=" + name + ", departments=" + departments + "]";
  }

  @Override
  public boolean equals(Object obj) {
    if (this == obj)
      return true;
    if (obj == null)
      return false;
    if (getClass() != obj.getClass())
      return false;
    University other = (University) obj;
    if (name == null) {
      if (other.name != null)
        return false;
    } else if (!name.equals(other.name))
      return false;
    if (departments == null) {
      if (other.departments != null)
        return false;
    } else if (!departments.equals(other.departments))
      return false;
    return true;
  }
}
