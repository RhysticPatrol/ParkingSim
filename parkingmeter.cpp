#include "ParkingMeter.h"
using namespace std;

// constructor to set up the parking meter
ParkingMeter::ParkingMeter(int allowed, int parked) : minutesAllowed(allowed), minutesParked(parked) {}

// return the minutes allowed on the meter
int ParkingMeter::getMinutesAllowed() const {
    return minutesAllowed;
}

// return the minutes the car has been parked
int ParkingMeter::getMinutesParked() const {
    return minutesParked;
}

// calculate the time elapsed since the car was parked
int ParkingMeter::timeElapsed() const {
    return minutesParked;
}