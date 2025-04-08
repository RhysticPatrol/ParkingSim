#include "ParkingTicket.h"
#include <iostream>
#include <iomanip>
using namespace std;

// constructor to initialize a parking ticket
ParkingTicket::ParkingTicket(const string& officerName,
                             const string& badgeNumber,
                             const string& carLicense,
                             const string& carMake,
                             const string& carModel,
                             const string& carColor,
                             int minutesViolation,
                             double parkingFee)
                           : officerName(officerName),
                             badgeNumber(badgeNumber),
                             carLicense(carLicense),
                             carMake(carMake),
                             carModel(carModel),
                             carColor(carColor),
                             minutesViolation(minutesViolation),
                             parkingFee(parkingFee) {}

// display the details of the parking ticket
void ParkingTicket::displayTicket() const {
    cout << "*** Parking Ticket ***" << "\n";
    cout << "Officer " << officerName << " Badge Number " << badgeNumber << "\n";
    cout << "Vehicle License Number: " << carLicense << "\n";
    cout << "Make: " << carMake << " Model: " << carModel << " Color: " << carColor << "\n";
    cout << "Meter Minutes: " << (minutesViolation + getMinutesParked())-minutesViolation << " Minutes Parked: " << (minutesViolation + getMinutesParked()) << "\n";
    cout << "Parking Fee: $" << fixed << setprecision(2) << parkingFee << "\n";
}
