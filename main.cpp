#include "PoliceOfficer.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include <iostream>
using namespace std;

int main() { // creating cars for the officer to inspect
    ParkedCar toyotaCamry("XYZ123", "Toyota", "Camry", "Red");
    ParkedCar hondaAccord("ABC987", "Honda", "Accord", "Blue");
    ParkedCar fordMustang("LMN456", "Ford", "Mustang", "Black");
    ParkedCar nissanAltima("DEF789", "Nissan", "Altima", "Silver");
    ParkedCar chevyMalibu("GHI012", "Chevrolet", "Malibu", "White");

    // creating meters for the cars
    ParkingMeter meter1(40, 30);
    ParkingMeter meter2(60, 70);
    ParkingMeter meter3(60, 190);
    ParkingMeter meter4(90, 80);
    ParkingMeter meter5(120, 240);

    PoliceOfficer officer("John Policeman", "COP123", toyotaCamry, meter1); // creating the officer

    officer = PoliceOfficer("John Policeman", "COP123", toyotaCamry, meter1); // running inspections for the cars
    officer.inspectCar();
    cout << "\n";

    officer = PoliceOfficer("John Policeman", "COP123", hondaAccord, meter2);
    officer.inspectCar();
    cout << "\n";

    officer = PoliceOfficer("John Policeman", "COP123", fordMustang, meter3);
    officer.inspectCar();
    cout << "\n";

    officer = PoliceOfficer("John Policeman", "COP123", nissanAltima, meter4);
    officer.inspectCar();
    cout << "\n";

    officer = PoliceOfficer("John Policeman", "COP123", chevyMalibu, meter5); // last car inspected
    officer.inspectCar();
    cout << "\n";

    return 0;
}
