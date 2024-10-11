#include "functions.h"
#include "globals.h"
#include "main.h"
#include "pros/rtos.hpp"

using namespace pros;

void example_route(){
    // Your basic functions:
    drive_dist(0);
    turn(0);
    drive_time(0);
    stop_motors();
    delay(0);
    
    // auton goes here
}
void offensive_route(){
    mogo_clamp.set_value(1);
    delay(100);
    drive_time(250,-1);
    delay(10);
    mogo_clamp.set_value(0);
    delay(10);
    drive_time(200,1);
    intake.move_voltage(12000);
    delay(20);
    drive_time(250,1);
    turn(-90);
    
    /*
    intake.move_voltage(12000); 
    drive_time(200, 1);
    stop_motors();
    delay(20);
    intake.move_voltage(0);
*/
    //delay(10); 
    //intake.move_voltage(0);
   // turn(90);
    //delay(5);
    //intake.move_voltage(-12000);
    //delay(15);
    
    // /*
    // delay(5);
    // intake.move_voltage(12000); //thing that lifts rings
    // drive_time(150);
    // delay(5); 
    // */
}