#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>
#include <iostream> // include iostream for displayTicket

using namespace std;

class ParkingTicket {
private:
    string officerName;
    string badgeNumber;
    string carLicense;
    string carMake;
    string carModel;
    string carColor;

    int minutesParked;
    int minutesAllowed;
    double parkingFee;

public:
    ParkingTicket(const string& officerName,
                  const string& badgeNumber,
                  const string& carLicense,
                  const string& carMake,
                  const string& carModel,
                  const string& carColor,
                  int minutesParked,
                  int minutesAllowed,
                  double parkingFee);

    void displayTicket() const;
};

#endif 