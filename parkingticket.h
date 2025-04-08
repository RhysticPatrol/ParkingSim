#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>

using namespace std;

// class to represent a parking ticket
class ParkingTicket {
private:
    string officerName;   // name of the officer
    string badgeNumber;   // badge number of the officer
    string carLicense;    // license number of the car
    string carMake;       // make of the car
    string carModel;      // model of the car
    string carColor;      // color of the car
    int minutesViolation; // minutes of violation
    double parkingFee;    // fee for the parking violation

public:
    // constructor to create a parking ticket
    ParkingTicket(const string& officerName, const string& badgeNumber,
                  const string& carLicense, const string& carMake,
                  const string& carModel, const string& carColor,
                  int minutesViolation, double parkingFee);

    // display the parking ticket details
    void displayTicket() const;
};

#endif