import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.println("Put in an integer.");
    int userans = input.nextInt();
    for (int i = 1; i < userans+1; i++) {
      for (int j = i; j > 0; j--) {
        System.out.print("+");
      }
      System.out.println();
    }
    // for (int i = userans; i > 0; i--) {
    //   System.out.print("+");
    // }
    // System.out.println();
  }
}