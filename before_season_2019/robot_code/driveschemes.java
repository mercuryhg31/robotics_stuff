import edu.wpi.first.wpilibj.*;
import com.ctre.phoenix.motorcontrol.can.WPI_TalonSRX;

class Robot extends TimedRobot {
    WPI_TalonSRX motorFL;
    WPI_TalonSRX motorFR;
    WPI_TalonSRX motorBL;
    WPI_TalonSRX motorBR;
    WPI_TalonSRX elevator;
    // CANTalonSRX elevmotorL;
    // CANTalonSRX elevmotorR;
    WPI_TalonSRX elevatorL;
    WPI_TalonSRX elevatorR;
    SpeedControllerGroup left;
    SpeedControllerGroup right;
    DifferentialDrive drive;
    XboxController controller;
    XboxController operator;
    
    void robotInit() {
        motorFL = new WPI_TalonSRX(1);
        motorFR = new WPI_TalonSRX(2);
        motorBL = new WPI_TalonSRX(3);
        motorBR = new WPI_TalonSRX(4);
        
        controller = new XboxController(0);
        operator = new XboxController(0);
        
        elevatorL = new WPI_TalonSRX(5);
        elevatorR = new WPI_TalonSRX(6);
        
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
            
        } else if (controller.getYButton()) {
            elevator.set(0.5);
            
        } else {
            elevator.set(0);
        }
        
        if (operator.getTriggerAxis(GenericHID.Hand.kLeft) > 0.0) {
            elevatorL.set(-operator.getTriggerAxis(GenericHID.Hand.kLeft));
            elevatorR.set(-operator.getTriggerAxis(GenericHID.Hand.kLeft));
            
        } else if (operator.getTriggerAxis(GenericHID.Hand.kRight) > 0.0) {
            elevatorL.set(operator.getTriggerAxis(GenericHID.Hand.kRight));
            elevatorR.set(operator.getTriggerAxis(GenericHID.Hand.kRight));
        }
    }
}

// implementing drive schemes
