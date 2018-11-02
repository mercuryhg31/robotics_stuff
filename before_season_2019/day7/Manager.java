class Manager extends Employee {

  public Manager(int age, String name) {
    super(age, name);
  }

  @Override
  void printInfo() {
    System.out.println("Age: " + m_age);
    System.out.println("Name: " + m_name);
    System.out.println("Salary: " + m_salary);
    System.out.println("Manager");
  }

  void println(String text) {
    System.out.println(text);
  }
  void print(String text) {
    System.out.print(text);
  }
}