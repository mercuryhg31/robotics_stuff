class Point {
  double m_x;
  double m_y;

  public Point(double x, double y) {
    m_x = x;
    m_y = y;
  }

  double orgndist() {
    return Math.sqrt(Math.pow(m_x, 2) + Math.pow(m_y, 2));
  }

  double anydist(double ex, double why) {
    return Math.sqrt(Math.pow((ex - m_x), 2) + Math.pow((why - m_y), 2));
  }
}