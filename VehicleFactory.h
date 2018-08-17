 #ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"


class VehicleFactory {

public:

    Vehicle * create(string, string, string, int, int);// Creates a Car object

    Vehicle * create(string, string, string, int, int, int);// Creates a Truck object

    Vehicle * create(string, string, string, int, int, bool);// Creates a Motorcycle object

};


#endif 




