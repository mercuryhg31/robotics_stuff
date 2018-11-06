class Polygon {
  int m_numSides;
  int m_sideLength;

  public Polygon(int numSides, int sideLength) {
    m_numSides = numSides;
    m_sideLength = sideLength;
  }

  void prtObj() {
    System.out.println(m_numSides);
    System.out.println(m_sideLength);
  }
}