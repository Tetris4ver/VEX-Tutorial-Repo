#include "functions.h"
#include "globals.h"
#include "main.h"
#include "pros/rtos.h"
#include "pros/rtos.hpp"

using namespace pros;

void example_route(){
    // Your basic functions:
    drive_time(150);
    delay(20);
    turn(10);
    
    // auton goes here
}
void offensive_route(){
    //go to the yellow score thing (4)
    drive_dist(34);
    delay(10);
    turn(-90);
    mogo_clamp.set_value(0);
    delay(10);
    drive_dist(-40);
    delay(50);
    mogo_clamp.set_value(1);
    delay(10);

    //get the 3 disks (3)
    drive_dist(25);
    delay(10);
    turn(90);
    delay(10);
    intake.move_voltage(12000);
    delay(10);
    drive_dist(23);
    delay(10);
    intake.move_voltage(0);

    //got 2 (3)
    turn(-15);
    delay(10);
    intake.move_voltage(12000);
    delay(10);
    drive_dist(7);
    intake.move_voltage(0);

    //got 1, get the last 2 (5)
    turn(-165); //front of the bot should be facing the direction of plus sign side on the white line
    delay(15);
    drive_dist(45);
    delay(10);
    intake.move_voltage(12000);
    delay(10);
    drive_dist(80);
    delay(80);
    //if possible do hang and stop intake idk. 
    




    

   /* mogo_clamp.set_value(0);
    delay(100);
    drive_time(115,-1);
    mogo_clamp.set_value(1);
    delay(10);
    intake.move_voltage(12000);
    delay(50);
    drive_time(200,1);
    intake.move_voltage(0);
    delay(20);
    drive_time(250,1);
    intake.move_voltage(12000);
    delay(10);
    drive_time(350); 
    mogo_clamp.set_value(0);
    turn(-90);
    
    
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