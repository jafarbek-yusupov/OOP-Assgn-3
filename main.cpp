#include <iostream>
using namespace std;

int main(){
    vector<Vehicle*> vehicles;
    vehicles.push_back(new LandVehicle("LandBrand", 2020, 4));
    vehicles.push_back(new Car("Toyota", 2021, 4, 4));
    vehicles.push_back(new SportsCar("Ferrari", 2023, 4, 2, 350));
    vehicles.push_back(new Truck("Volvo", 2019, 6, 18.5));
    vehicles.push_back(new AirVehicle("Boeing", 2018, 12000));
    vehicles.push_back(new Helicopter("Apache", 2022, 5000, 4));
    vehicles.push_back(new WaterVehicle("Yamaha", 2020, "Recreational"));
    vehicles.push_back(new Boat("Sunseeker", 2021, "Luxury", 10.5));
    vehicles.push_back(new Submarine("Seawolf", 2015, "Military", 800));
    
    // Iterate through the vector and call getInfo() for each vehicle
    for (int i = 0; i < vehicles.size(); i++) {
       Vehicle* ptr = vehicles[i];
       cout<<ptr->getInfo()<<endl;
       cout<<ptr->Vehicle::getInfo()<<endl;
       cout << "---------------------------" << endl;
    }
    // Clean up allocated memory
    for (int i = 0; i < vehicles.size(); i++) {
       delete vehicles[i];
    }
    return 0;
}
/*---- Expected output ----*
LandVehicle class:: Number of wheels: 4
Vehicle class:: Brand: LandBrand
Vehicle class:: Year: 2020
---------------------------
Car class:: Number of doors: 4
Vehicle class:: Brand: Toyota
Vehicle class:: Year: 2021
---------------------------
SportsCar class:: Max speed: 350 km/h
Vehicle class:: Brand: Ferrari
Vehicle class:: Year: 2023
---------------------------
Truck class:: Load capacity: 18.5 tons
Vehicle class:: Brand: Volvo
Vehicle class:: Year: 2019
---------------------------
AirVehicle class:: Max altitude: 12000 meters
Vehicle class:: Brand: Boeing
Vehicle class:: Year: 2018
---------------------------
Helicopter class:: Rotor count: 4
Vehicle class:: Brand: Apache
Vehicle class:: Year: 2022
---------------------------
WaterVehicle class:: Vessel type: Recreational
Vehicle class:: Brand: Yamaha
Vehicle class:: Year: 2020
---------------------------
Boat class:: Length: 10.5 meters
Vehicle class:: Brand: Sunseeker
Vehicle class:: Year: 2021
---------------------------
Submarine class:: Max depth: 800 meters
Vehicle class:: Brand: Seawolf
Vehicle class:: Year: 2015
---------------------------
*/
