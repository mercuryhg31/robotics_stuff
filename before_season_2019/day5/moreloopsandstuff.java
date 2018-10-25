import java.util.Scanner;
import java.lang.String;

class Main {
  
  private static void printBackwards(String text) {
    for (int i = text.length()-1; i >= 0; i--) {
      System.out.print(text.charAt(i));
    }
  }

  public static void main(String[] args) {
    // String pie = "pie";
    // char character = pie.charAt(0);
    // System.out.println(character);
    // System.out.println(pie.length());
    
    Scanner input = new Scanner(System.in);
    String in = input.nextLine();
    String text = "SPOOKY SCARY SKELETONS";
    System.out.println();
    for (int i = in.length()+2; i > 0; i--) {
      System.out.print("-");
    }
    System.out.println();
    System.out.print("|");
    for (int i = in.length()-1; i >= 0; i--) {
      System.out.print(in.charAt(i));
    }
    System.out.print("|");
    System.out.println();
    // printBackwards(in);
    for (int i = in.length()+2; i > 0; i--) {
      System.out.print("-");
    }
  }
}