import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    // int chairNumOfLegs = 4;
    // String chairCountry = "Murica";
    // String chairMaterial = "Wood";

    // sitOnChair (chairNumOfLegs, chairCountry, chairMaterial);

    Chair chair = new Chair(3, "Metal", "Canada");
    // chair.numOfLegs = 3;
    // chair.country = "Canada";
    // chair.material = "Metal";
    // System.out.println(chair.material);


    // sitOnChair(3, "S", "A");
    chair.sit();

    Chair sec = new Chair(4, "Loser", "Loserville");
    sec.sit();

    Chair Emily = new Chair(5, "flesh", "Emily Island");
    Emily.sit();
  }

  // public static void sitOnChair (int legs, String country, String material) {
  //   System.out.println("Sitting in chair from " + country + " with " + legs + " legs and made of " + material + ".");
  // }
}