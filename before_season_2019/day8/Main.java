import java.util.*;
import java.lang.*;

class Main {
  public static void main(String[] args) {
    int num = 3;
    Polygon shape = new Polygon(4,2);
    // shape.m_numSides = 4;
    // shape.m_sideLength = 2;

    Polygon shape2 = new Polygon(5, 4);
    // shape2.m_numSides = 5;
    // shape2.m_sideLength = 4;
    
    shape.prtObj();
  }
}

// There's supposed to be more stuff and like, three more java files (triangle and more), but dead.