 #include "VehicleFactory.h"


// Creates a Car object
Vehicle* VehicleFactory::create(string ma, string mo, string col, int y, int m)
{
	return new Car(ma, mo, col, y, m);
}


// Creates a Truck object
Vehicle* VehicleFactory:: create(string ma, string mo, string col, int y, int m, int ax)
{
	return new Truck(ma, mo, col, y, m, ax);	
}


// Creates a Motorcycle object
Vehicle* VehicleFactory:: create(string ma, string mo, string col, int y, int m, bool sc)
{
	return new Motorcycle(ma, mo, col, y, m, sc);
}

