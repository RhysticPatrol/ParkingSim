#include "ParkingMeter.h"

// constructor for ParkingMeter class
// this sets up the parking meter with the allowed minutes and parked minutes
ParkingMeter::ParkingMeter(int allowed, int parked)
    : allowedMinutes(allowed), parkedMinutes(parked) {}

// get the number of minutes allowed on the meter
int ParkingMeter::getAllowedMinutes() const {
    return allowedMinutes; // return the allowed minutes
}

// get the number of minutes the car has been parked
int ParkingMeter::getParkedMinutes() const {
    return parkedMinutes; // return the parked minutes
}

// check if the parking time has expired
bool ParkingMeter::isExpired() const {
    return parkedMinutes > allowedMinutes; // return true if parked time is more than allowed
}

// calculate the number of overdue minutes
int ParkingMeter::getOverdueMinutes() const {
    if (isExpired()) { // check if the meter is expired
        return parkedMinutes - allowedMinutes; // calculate overdue minutes
    }
    return 0; // return 0 if not expired
}