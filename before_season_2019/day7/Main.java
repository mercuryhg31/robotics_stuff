import java.util.*;
// import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    // Employee emply1 = new Employee(10, "John");
    // // emply1.prtTxt();
    // emply1.printInfo();
    // Cashier cash = new Cashier(50, "Xavier");
    // // cash.prtTxt();
    // cash.printInfo(); println("");

    int[] nums = new int[10];
    Employee[] employees = new Employee[3];
    employees[0] = new Cashier(10, "Ryan");
    employees[1] = new Employee(900, "Ethan");
    employees[2] = new Manager(666, "PitifulPossibleModem");

    for (int i = 0; i < 3; i++) {
      employees[i].printInfo();
    }
  }

  private static void println(String text) {
    System.out.println(text);
  }
  private static void print(String text) {
    System.out.print(text);
  }
}