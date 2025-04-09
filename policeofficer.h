#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include <string>

using namespace std; 

class PoliceOfficer {
public:
    PoliceOfficer(const string& name,
                  const string& badgeNumber,
                  const ParkedCar& car, // use references
                  const ParkingMeter& meter); // use references

    void inspectCar();
    double calculateFine(int minutesOver) const;

private:
    string name;
    string badgeNumber;
    ParkedCar car;
    ParkingMeter meter;
};

#endif