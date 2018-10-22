import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    print("Put in a number.");
    double a = input.nextInt();
    print("Put in another number.");
    double b = input.nextInt();

    System.out.println(sum(a, b));
  }
  
  private static double sum(double a, double b) {
    return a + b;
  }
  private static void print(String text) {
    System.out.println(text);
  }
}