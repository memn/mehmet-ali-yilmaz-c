//
// Created by Mehmet Emin Mumcu on 2.11.2018.
//

#include "intro_example.h"


// 1 feet = 12 inches
// 1 inches = 2.54 centimeters
const double INCHES_PER_FEET = 12;
const double CENTIMETERS_PER_INCH = 2.54;

double convert2Centimeters(double feet, double inches){
    double totalInches = inches + feet * INCHES_PER_FEET;
    return totalInches * CENTIMETERS_PER_INCH;
}
