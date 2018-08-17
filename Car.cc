#include "Car.h"

Car::Car(string ma, string mo, string col, int y, int m)
	:Vehicle(ma, mo, col, y, m){ }

Car::Car(const Car& c)
	:Vehicle(c.getMake(), c.getModel(), c.getColour(), c.getYear(), c.getMilage()) { }

//toString virtual function
string Car:: toString()
{
	stringstream strm;
	strm <<"\t"<< left << setw(17) << "CAR: " << this->getMake() << " " << this->getModel() << " " << this->getYear()<< " " <<this->getMilage() ;
	return strm.str();	
}




