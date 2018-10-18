import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    int[] grades = new int[5];
    // String [] names = new String[5];

    Scanner input = new Scanner(System.in);
    int total = 0;
    
    for (int i = 0; i < grades.length; i++) {
      System.out.println("Ay");
      grades[i] = input.nextInt();
      total += grades[i];
    }
    System.out.println();
    for (int i = 0; i < grades.length; i++) {
      System.out.println(grades[i]);
    }
    System.out.println();
    System.out.println("Average: " + total/grades.length);

    for (int i = 0; i < grades.length; i++) {
      grades[i] *= grades[i];
      System.out.println(grades[i]);
    }
  }
}