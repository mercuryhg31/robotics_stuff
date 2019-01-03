public class Robot extends IterativeRobot {

    WPI_TalonSRX frontLeft;
    WPI_TalonSRX frontRight;
    WPI_TalonSRX backLeft;
    WPI_TalonSRX backRight;
    XboxController controller;
    
    SpeedControllerGroup leftMotors;
    SpeedControllerGroup rightMotors;
    
    DifferentialDrive driveTrain;
    
    public void robotInit() {
        // Runs once when the robot is turned on
        
        frontLeft = new WPI_TalonSRX(1);
        frontRight = new WPI_TalonSRX(2);
        backLeft = new WPI_TalonSRX(3);
        backRight = new WPI_TalonSRX(4);
        
        controller = new XboxController(1);
        
        leftMotors = new SpeedControllerGroup(frontLeft, backLeft);
        rightMotors = new SpeedControllerGroup(frontRight, backRight);
        
        driveTrain = new DifferentialDrive(leftMotors, rightMotors);
    }
    
    public void teleopPeriodic() {
        // Runs repeatedly when the robot is in teleop
        
        double moveSpeed = controller.getY(GenericHID.hand.kLeft);
        double turnSpeed = controller.getX(..);
        driveTrain.arcadeDrive(moveSpeed, turnSpeed);
    }
}