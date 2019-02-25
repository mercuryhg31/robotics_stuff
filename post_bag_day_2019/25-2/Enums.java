public class Enums {
    /**
    * 0 - fully neutral
    * 1 - fully extended
    * 2 - back extended
    */
    // static int state = 0;
    
    public enum ClimbState {
        NEUTRAL,
        EXTENDED,
        BACK_EXTENDED; // he thinks the semicolon is optional
    }
    
    // public class Test {
        
    // }
    
    // Test test = new Test();
    static ClimbState state;
    
    public static void main(String[] args) {
        // state = 4;
        state = ClimbState.NEUTRAL;
        state = ClimbState.EXTENDED;
        state = ClimbState.BACK_EXTENDED;
    }
    
    public static void advanceClimb() {
        if(state == ClimbState.NEUTRAL) {
            System.out.println("Extending both pistons");
            state = ClimbState.EXTENDED;
        }
        else if(state == ClimbState.EXTENDED) {
            System.out.println("Retracting back");
            state = ClimbState.BACK_EXTENDED;
        }
        else if(state == ClimbState.BACK_EXTENDED) {
            System.out.println("Retracting back");
            state = ClimbState.NEUTRAL;
        }
        // switch (climbState) {
        //     case NEUTRAL:
        //         System.out.println("Extending both pistons");
        //         state = ClimbState.EXTENDED;
        //         break;
        //     case EXTENDED:
        //         System.out.println("Retracting back");
        //         state = ClimbState.BACK_EXTENDED;
        //         break;
        //     case BACK_EXTENDED:
        //         System.out.println("Retracting back");
        //         state = ClimbState.NEUTRAL;
        //         break;
        // }
    }
    
    // public static void driveClimb() {
    //     if(state == 1) {
    //         System.out.println("Driving both");
    //     }
    //     else if(state == 2) {
    //         System.out.println("Driving");
    //     }
    //     else {
    //         // Don't do anything
    //     }
    // }
}