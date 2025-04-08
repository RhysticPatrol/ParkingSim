#include "PoliceOfficer.h"
#include <iostream>
using namespace std;

int main() {
    // create a few parked cars
    ParkedCar toyotaCamry("XYZ123", "Toyota", "Camry", "Red");
    ParkedCar hondaAccord("ABC987", "Honda", "Accord", "Blue");
    ParkedCar fordMustang("LMN456", "Ford", "Mustang", "Black");
    ParkedCar nissanAltima("DEF789", "Nissan", "Altima", "Silver");
    ParkedCar chevyMalibu("GHI012", "Chevrolet", "Malibu", "White");

    // create parking meters
    ParkingMeter meter1(40, 30);
    ParkingMeter meter2(60, 70);
    ParkingMeter meter3(60, 190);
    ParkingMeter meter4(90, 80);
    ParkingMeter meter5(120, 240);

    // create a police officer
    PoliceOfficer officer("Officer Multi", "Multi123", toyotaCamry, meter1);

    // inspect each car
    officer = PoliceOfficer("Officer Multi", "Multi123", toyotaCamry, meter1);
    officer.inspectCar();
    cout << "\n";

    officer = PoliceOfficer("Officer Multi", "Multi123", hondaAccord, meter2);
    officer.inspectCar();
    cout << "\n";

    officer = PoliceOfficer("Officer Multi", "Multi123", fordMustang, meter3);
    officer.inspectCar();
    cout << "\n";

    officer = PoliceOfficer("Officer Multi", "Multi123", nissanAltima, meter4);
    officer.inspectCar();
    cout << "\n";

    officer = PoliceOfficer("Officer Multi", "Multi123", chevyMalibu, meter5);
    officer.inspectCar();
    cout << "\n";

    return 0;
}