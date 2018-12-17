import edu.wpi.first.wpilibj.*;
import com.ctre.phoenix.motorcontrol.can.WPI_TalonSRX;

class Robot extends TimedRobot {
    WPI_TalonSRX motorFL;
    WPI_TalonSRX motorFR;
    WPI_TalonSRX motorBL;
    WPI_TalonSRX motorBR;
    SpeedControllerGroup left;
    SpeedControllerGroup right;
    DifferentialDrive drive;
    XboxController controller;
    
    void robotInit() {
        motorFL = new WPI_TalonSRX(1);
        motorFR = new WPI_TalonSRX(2);
        motorBL = new WPI_TalonSRX(3);
        motorBR = new WPI_TalonSRX(4);
        
        controller = new XboxController(0);
        
        left = new SpeedControllerGroup(motorFL, motorBL);
        
        right = new SpeedControllerGroup(motorFR, motorBR);
        
        drive = new DifferentialDrive(left, right);
    }
    
    void teleopInit() {
        
    }
    
    void teleopPeriodic() {
        double driveSpeed;
        double turnSpeed;
        
        if (controller.getAButton()) {
            driveSpeed = controller.getY(GenericHID.Hand.kLeft);
            turnSpeed = controller.getX(GenericHID.Hand.kLeft);
            
        } else if (controller.getBumper(GenericHID.Hand.kLeft)) {
            driveSpeed = controller.getY(GenericHID.Hand.kLeft);
            turnSpeed = controller.getX(Generic.Hand.kRight);
            
        } else if (controller.getBumper(GenericHID.Hand.kRight)) {
            driveSpeed = controller.getY(GenericHID.Hand.kRight);
            turnSpeed = controller.getX(GenericHID.Hand.kLeft);
        }
        drive.arcadeDrive(driveSpeed, turnSpeed);
        
        if (controller.getXButton()) {
            elevator.set(-0.5);
        }
        else if (controller.getYButton()) {
            elevator.set(0.5);
        }
        else {
            elevator.set(0);
        }
    }
}

// implementing drive schemes
