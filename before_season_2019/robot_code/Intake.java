package frc.robot.subsystems;

import edu.wpi.first.wpilibj.*;
import edu.wpi.first.wpilibj.GenericHID.Hand;
import edu.wpi.first.wpilibj.drive.*;
import com.ctre.phoenix.motorcontrol.can.WPI_TalonSRX;

public class Intake {
    WPI_TalonSRX intakeMotor1;
    WPI_TalonSRX intakeMotor2;
    
    public Intake() {
        intakeMotor1 = new WPI_TalonSRX(1);
        intakeMotor2 = new WPI_TalonSRX(2);
    }
    
    public void setWheels(XboxController controller) {
        if (controller.getAButton()) {
            intakeMotor1.set(-1);
            intakeMotor2.set(-1);
        }
        if (controller.getBButton()) {
            intakeMotor1.set(1);
            intakeMotor2.set(1);
        }
        else {
            intakeMotor1.set(0);
            intakeMotor2.set(0);
        }
    }
}