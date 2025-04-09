#include "ParkingTicket.h"
#include <iostream>
#include <iomanip>

using namespace std;

// constructor for ParkingTicket class
// this sets up the ticket with officer details and car info
ParkingTicket::ParkingTicket(const string& officerName,
                               const string& badgeNumber,
                               const string& carLicense,
                               const string& carMake,
                               const string& carModel,
                               const string& carColor,
                               int minutesParked,
                               int minutesAllowed,
                               double parkingFee)
    : officerName(officerName),
      badgeNumber(badgeNumber),
      carLicense(carLicense),
      carMake(carMake),
      carModel(carModel),
      carColor(carColor),
      minutesParked(minutesParked),
      minutesAllowed(minutesAllowed),
      parkingFee(parkingFee) {}

// display the details of the parking ticket
void ParkingTicket::displayTicket() const {
    cout << "*** Parking Ticket ***\n";
    cout << "Officer: " << officerName << " (Badge #" << badgeNumber << ")\n\n"; // name and badge number

    cout << "Vehicle Info:\n";
    cout << "  License Plate: " << carLicense << "\n"; //plate
    cout << "  Make & Model: " << carMake << " " << carModel << "\n"; // make and model
    cout << "  Color: " << carColor << "\n\n"; // color

    cout << "Parking Info:\n";
    cout << "  Allowed Time: " << minutesAllowed << " minutes\n"; // allowed time
    cout << "  Parked Time:   " << minutesParked << " minutes\n"; // parked time
    cout << "  Over Time:     " << (minutesParked - minutesAllowed) << " minutes\n\n"; // fined time

    cout << "Fine Issued: $" << fixed << setprecision(2) << parkingFee << "\n"; // print amount owed
}