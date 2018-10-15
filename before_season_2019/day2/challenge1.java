import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.println("Put in an integer.");
    int userans = input.nextInt();
    int answer = 0;
    for (int i = userans; i > 0; i--){
      answer += i;
    }
    System.out.println(answer);
  }
}