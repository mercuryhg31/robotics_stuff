class Employee {
  int m_age;
  String m_name;
  int m_salary = 30000;

  public Employee(int age, String name) {
    m_age = age;
    m_name = name;
  }

  // void prtTxt() {
  //   System.out.println("Hi~");
  // }

  void printInfo() {
    System.out.println("Age: " + m_age);
    System.out.println("Name: " + m_name);
    System.out.println("Salary: " + m_salary);
    System.out.println("Employee");
  }

  void println(String text) {
    System.out.println(text);
  }
  void print(String text) {
    System.out.print(text);
  }
}