 #ifndef TRUCK_H

#define TRUCK_H

#include "Vehicle.h"


class Truck : public Vehicle {

public:

    Truck(string, string, string, int, int, int);
    Truck(const Truck &);
    
    // toString Virtual Function to print the truck
    string toString(); 


private:

    int axles;

};

 

#endif
