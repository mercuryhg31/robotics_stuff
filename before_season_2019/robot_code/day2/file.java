import edu.wpi.first.wpilibj.*;
import com.ctre.phoenix.motorcontrol.can.WPI_TalonSRX;

class Robot extends TimedRobot {
    WPI_TalonSRX motor FL;
    WPI_TalonSRX motor FR;
    WPI_TalonSRX motor BL;
    WPI_TalonSRX motor BR;
    DifferentialDrive drive;
    XboxController controller;
    
    void robotInit() {
        motorFL = new WPI_TalonSRX(1);
        motorFR = new WPI_TalonSRX(2);
        motorBL = new WPI_TalonSRX(3);
        motorBR = new WPI_TalonSRX(4);
        controller = new XboxController(0);
        
        drive = new DifferentialDrive(motorFL, motorFR);
    }
    
    void teleopInit() {
        // motor.set(1.0);
        // Timer.delay(1.0);
        // motor.set(0.0);
    }
    
    void teleopPeriodic() {
        double yValue = controller.getY(GenericHID.Hand.kLeft);
        double xValue = controller.getX(GenericHID.Hand.kLeft);
        drive.arcadeDrive(yValue, xValue);
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