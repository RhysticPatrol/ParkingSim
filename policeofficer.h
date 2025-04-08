#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

using namespace std;

// class to represent a police officer
class PoliceOfficer {
private:
    string name; // name of the officer
    string badgeNumber; // badge number of the officer
    ParkedCar car; // car being inspected
    ParkingMeter meter; // parking meter associated with the car

public:
    // constructor to create a police officer
    PoliceOfficer(const string& name, const string& badgeNumber, const ParkedCar& car, const ParkingMeter& meter);

    // inspect the car for parking violations
    void inspectCar();
};

#endif