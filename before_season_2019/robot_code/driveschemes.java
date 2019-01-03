package frc.robot;

import edu.wpi.first.wpilibj.*;
import edu.wpi.first.wpilibj.GenericHID.Hand;
import edu.wpi.first.wpilibj.drive.*;
import com.ctre.phoenix.motorcontrol.can.WPI_TalonSRX;

class Robot extends /*TimedRobot*/ IterativeRobot {
    WPI_TalonSRX motorFL;
    WPI_TalonSRX motorFR;
    WPI_TalonSRX motorBL;
    WPI_TalonSRX motorBR;
    WPI_TalonSRX elevator;
    // CANTalonSRX elevmotorL;
    // CANTalonSRX elevmotorR;
    WPI_TalonSRX elevatorL;
    WPI_TalonSRX elevatorR;
    WPI_TalonSRX intakeL;
    WPI_TalonSRX intakeR;
    SpeedControllerGroup left;
    SpeedControllerGroup right;
    DifferentialDrive drive;
    XboxController controller;
    XboxController operator;
    
    Intake intake;
    
    void robotInit() {
        linkageMotor = new WPI_TalonSRX(_);
        motorFL = new WPI_TalonSRX(1);
        motorFR = new WPI_TalonSRX(2);
        motorBL = new WPI_TalonSRX(3);
        motorBR = new WPI_TalonSRX(4);
        
        controller = new XboxController(0);
        operator = new XboxController(0);
        
        elevatorL = new WPI_TalonSRX(5);
        elevatorR = new WPI_TalonSRX(6);
        
        // intakeL = new WPI_TalonSRX(7);
        // intakeR = new WPI_TalonSRX(8);
        intake = new Intake();
        
        left = new SpeedControllerGroup(motorFL, motorBL);
        
        right = new SpeedControllerGroup(motorFR, motorBR);
        
        drive = new DifferentialDrive(left, right);
        
        elevator = new SpeedControllerGroup(elevatorL, elevatorR);
    }
    
    void teleopInit() {
        
    }
    
    void teleopPeriodic() {
        double driveSpeed;
        double turnSpeed;
        
        // DRIVE TRAIN
        
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
        
        // if (controller.getXButton()) {
        //     elevator.set(-0.5);
            
        // } else if (controller.getYButton()) {
        //     elevator.set(0.5);
            
        // } else {
        //     elevator.set(0);
        // }
        
        // ELEVATOR (RYAN'S COMMENTING OUT THE IFS BECAUSE WE DON'T NEED THEM? (WASTE OF EXECUTION THOUGH))
        // WE NEED THEM FOR MY VERSION THOUGH
        // OHHH, MY 0.0 THING WAS GOOD, NICEEEEE // I am a fool :)
        
        if (operator.getTriggerAxis(GenericHID.Hand.kLeft) > 0.0) {
            // elevatorL.set(-operator.getTriggerAxis(GenericHID.Hand.kLeft));
            // elevatorR.set(-operator.getTriggerAxis(GenericHID.Hand.kLeft));
            elevator.set(-operator.getTriggerAxis(GenericHID.Hand.kLeft));
            
        } else if (operator.getTriggerAxis(GenericHID.Hand.kRight) > 0.0) {
            // elevatorL.set(operator.getTriggerAxis(GenericHID.Hand.kRight));
            // elevatorR.set(operator.getTriggerAxis(GenericHID.Hand.kRight));
            elevator.set(operator.getTriggerAxis(GenericHID.Hand.kRight));
        }
        
        // elevator.set(speedR - speedL);
        
        // INTAKE
        
        // if (operator.getAButton()) {
        //     intakeL.set(1.0);
        //     intakeR.set(1.0);
            
        // } else if (operator.getBButton()) {
        //     intakeL.set(-1.0);
        //     intakeR.set(-1.0);
        // }
        
        intake.setWheels(operator); // Using Intake.java
        
        // LINKAGE (ARTHUR & RYAN)
        
        // if (controller.getY(GenericHID.Hand.kLeft)) {
            double linkageY = operator.getY(GenericHID.Hand.kLeft);
            linkageMotor.set(-linkageY);
        // }
    }
}

// implementing drive schemes