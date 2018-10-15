import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.println("Put in an integer.");
    int userans = input.nextInt();
    if (isPrime(userans)) {
      System.out.println("Your number is prime.");
    } else {
      System.out.println("Your number is not prime.");
    }

    
  }

  private static boolean isPrime(int num) {
    if (num <= 1) {
      return false;
    }
    if (num % 2 == 0) {
      return false;
    } else if (num == 2) {
      return true;
    }

    for (int i = 2; i < Math.sqrt(num)+1; i++) {
      if (num % i == 0) {
        return false;
        // System.out.println("I am invisibleeeeeeeeeee");
      }
    }
    return true;
  }
}