public class Intake {
    WPI_TalonSRX intakeMotor1;
    WPI_TalonSRX intakeMotor2;
    
    public void robotInit() {
        intakeMotor1 = new WPI_TalonSRX(1);
        intakeMotor1 = new WPI_TalonSRX(2);
    }
    
    public void teleopInit() {
        if(control)
    }
    
    public void teleopPeriodic() {
        
    }
}