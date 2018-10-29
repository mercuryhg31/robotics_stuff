class Chair {
  int m_numOfLegs;
  String m_country;
  String m_material;

  Chair (int numOfLegs, String material, String country) {
    m_numOfLegs = numOfLegs;
    m_material = material;
    m_country = country;
  }

  void sit() {
    System.out.println("Sitting in chair from " + m_country + " with " + m_numOfLegs + " legs and made of " + m_material + ".");
  }
}