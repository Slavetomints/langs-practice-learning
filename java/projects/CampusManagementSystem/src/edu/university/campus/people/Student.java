package edu.university.campus.people;

import java.util.ArrayList;

import edu.university.campus.academics.Course;
import edu.university.campus.academics.Transcript;
import edu.university.campus.finance.BillingAccount;
import edu.university.campus.finance.Scholarship;

public class Student extends Person {
  String major;
  ArrayList<Course> enrolledCourses = new ArrayList<Course>();
  Transcript transcript = new Transcript();
  BillingAccount billingAccount = new BillingAccount();
  ArrayList<Scholarship> scholarships = new ArrayList<Scholarship>();

  public Student(String name, String id, String email, String major, ArrayList<Course> enrolledCourses,
      Transcript transcript, BillingAccount billingAccount, ArrayList<Scholarship> scholarships) {
    super(name, id, email);
    this.major = major;
    this.enrolledCourses = enrolledCourses;
    this.transcript = transcript;
    this.billingAccount = billingAccount;
    this.scholarships = scholarships;
  }

  public Student() {
    super();
    this.major = "major";
    this.enrolledCourses = new ArrayList<Course>();
    this.transcript = new Transcript();
    this.billingAccount = new BillingAccount();
    this.scholarships = new ArrayList<Scholarship>();
  }

  public String getMajor() {
    return major;
  }

  public void setMajor(String major) {
    this.major = major;
  }

  public ArrayList<Course> getEnrolledCourses() {
    return enrolledCourses;
  }

  public void setEnrolledCourses(ArrayList<Course> enrolledCourses) {
    this.enrolledCourses = enrolledCourses;
  }

  public Transcript getTranscript() {
    return transcript;
  }

  public void setTranscript(Transcript transcript) {
    this.transcript = transcript;
  }

  public BillingAccount getBillingAccount() {
    return billingAccount;
  }

  public void setBillingAccount(BillingAccount billingAccount) {
    this.billingAccount = billingAccount;
  }

  public ArrayList<Scholarship> getScholarships() {
    return scholarships;
  }

  public void setScholarships(ArrayList<Scholarship> scholarships) {
    this.scholarships = scholarships;
  }

  public void enroll(Course course) {
    enrolledCourses.add(course);
  }

  @Override
  public String toString() {
    return "Student [name=" + name + ", id=" + id + ", email=" + email + ", major=" + major + ", enrolledCourses="
        + enrolledCourses + ", transcript=" + transcript + ", billingAccount=" + billingAccount + ", scholarships="
        + scholarships + "]";
  }

  @Override
  public boolean equals(Object obj) {
    if (this == obj)
      return true;
    if (!super.equals(obj))
      return false;
    if (getClass() != obj.getClass())
      return false;
    Student other = (Student) obj;
    if (major == null) {
      if (other.major != null)
        return false;
    } else if (!major.equals(other.major))
      return false;
    if (enrolledCourses == null) {
      if (other.enrolledCourses != null)
        return false;
    } else if (!enrolledCourses.equals(other.enrolledCourses))
      return false;
    if (transcript == null) {
      if (other.transcript != null)
        return false;
    } else if (!transcript.equals(other.transcript))
      return false;
    if (billingAccount == null) {
      if (other.billingAccount != null)
        return false;
    } else if (!billingAccount.equals(other.billingAccount))
      return false;
    if (scholarships == null) {
      if (other.scholarships != null)
        return false;
    } else if (!scholarships.equals(other.scholarships))
      return false;
    return true;
  }

}
