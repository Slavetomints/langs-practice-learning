package edu.university.campus.people;

public abstract class Person {
  String name;
  String id;
  String email;

  public Person(String name, String id, String email) {
    this.name = name;
    this.id = id;
    this.email = email;
  }

  public Person() {
    this.name = "";
    this.id = "";
    this.email = "";
  }

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }
  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }
  
  @Override
  public String toString() {
    return "Person [name=" + name + ", id=" + id + ", email=" + email + "]";
  }
  @Override
  public boolean equals(Object obj) {
    if (this == obj)
      return true;
    if (obj == null)
      return false;
    if (getClass() != obj.getClass())
      return false;
    Person other = (Person) obj;
    if (name == null) {
      if (other.name != null)
        return false;
    } else if (!name.equals(other.name))
      return false;
    if (id == null) {
      if (other.id != null)
        return false;
    } else if (!id.equals(other.id))
      return false;
    if (email == null) {
      if (other.email != null)
        return false;
    } else if (!email.equals(other.email))
      return false;
    return true;
  }

  
  
}
