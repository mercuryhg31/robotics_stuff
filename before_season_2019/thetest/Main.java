import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.println("Enter x-value:");
    double x = input.nextDouble();
    System.out.println("Enter y-value:");
    double y = input.nextDouble();
    Point point = new Point(x, y);
    System.out.println(point.orgndist());
    System.out.println("Enter other x-value:");
    x = input.nextDouble();
    System.out.println("Enter other y-value:");
    y = input.nextDouble();
    System.out.println(point.anydist(x, y));
  }
}

// TASK 2
// import java.util.*;
// class Main {
//   public static void main(String[] args) {
//     Scanner input = new Scanner(System.in);
//     System.out.println("Enter base number:");
//     int base = input.nextInt();
//     System.out.println("Enter exponent:");
//     int exp = input.nextInt();
//     System.out.println();
//     System.out.print("Your answer is: ");
//     System.out.println(exponent(base, exp));
//   }
//   public static int exponent(int base, int exp) {
//     int ans = 1;
//     for (int i = 0; i < exp; i++) {
//       ans *= base;
//     }
//     return ans;
//   }
// }

// TASK 1
// import java.util.*;
// class Main {
//   public static void main(String[] args) {
//     Scanner input = new Scanner(System.in);
//     System.out.println("Enter your number:");
//     int max = input.nextInt();
//     System.out.println("Enter the increment:");
//     int icr = input.nextInt();

//     for (int i = 0; i+icr <= max; i+=icr) {
//       System.out.println(i+icr);
//     }
//   }
// }

// import java.util.*;
// class Main {
//   public static void main(String[] args) {
    
//   }
// }