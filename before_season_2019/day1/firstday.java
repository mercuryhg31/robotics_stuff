import java.util.Scanner; // allows us to use user input

public class Main
{
  public static void main(String [] args)
  {
    Scanner input = new Scanner(System.in);
    System.out.println("How was your day on a scale of 1 to 10?");
    int userans = input.nextInt();
    System.out.println(userans); // death to thee
    input.close();
  }
}

/*
helloyellomellojello
*/

// class Main
// {
//   public static void main(String [] args)
//   {
//     int bucket = 999999;
//     System.out.print(bucket);
//     bucket = 0;
//     System.out.println(bucket);

//     String text = "Yello";
//     System.out.println(text);
//     text = text + "Mello";
//     System.out.println(text);

//     double decimalDouble = 3.141592653;
//     System.out.println(decimalDouble);

//     float decimalFloat = 31415;
//     System.out.println(decimalFloat);
//   }
// }

// class Main
// {
//   public static void main(String [] args)
//   {
//     System.out.println("Thou shalt not pass!");
//     System.out.print("Pants are an illusion, and so is death.");
//     System.out.println(" -The Swamp Guy");
//     System.out.print(125+34);
//   }
// }

// class Main {
//   public static void main(String[] args) {
//     System.out.println("Hello world!");
//   }
// }