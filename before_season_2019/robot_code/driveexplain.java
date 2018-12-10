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
        // motor.set(1.0);
        // Timer.delay(1.0);
        // motor.set(0.0);
    }
    
    void teleopPeriodic() {
        double driveSpeed = controller.getY(GenericHID.Hand.kLeft);
        double turnSpeed = controller.getX(GenericHID.Hand.kLeft);
        drive.arcadeDrive(driveSpeed, turnSpeed);
        // if(controller.getAButton()) {
        //     motorFL.set(1.0);
        //     motorFR.set(1.0);
        //     motorBL.set(1.0);
        //     motorBR.set(1.0);
        // }
        // else if(controller.getButton()) {
        //     motorFL.set(-1.0);
        //     motorFR.set(-1.0);
        //     motorBL.set(-1.0);
        //     motorBR.set(-1.0);
        // }
        // else {
        //     motor.set(0.0);
        // }
    }
}

/* This is review of day 1 */
/* With some stuff added on for days 2 and 3 */