public class Robot extends IterativeRobot {
    WPI_TalonSRX elevator;
    XboxController controller;
    
    public void robotInit() {
        // Runs once when
        
        elevator = new WPI_TalonSRX(10);
        
        controller = new XboxController(1);
    }
    
    public void teleopInit() {
        
    }
    
    public void teleopPeriodic() {
        
    }
}