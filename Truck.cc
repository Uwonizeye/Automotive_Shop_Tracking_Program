 #include "Truck.h"

Truck::Truck(string ma, string mo, string col, int y, int m, int ax)
	: Vehicle(ma, mo, col, y, m), axles(ax){ }


Truck::Truck(const Truck& t)
: Vehicle(t.getMake(), t.getModel(), t.getColour(), t.getYear(), t.getMilage()), axles(t.axles){ }
 

// toString virtual function to print truck

string Truck::toString()
{
    stringstream strm;
    strm << "\t" << left << setw(17) << "TRUCK:" << this->getMake() << "  " << this->getModel() << "  "<< this->getColour() << "  " << this->getYear()<< "  " <<this->getMilage()<< "  " << axles;
    return strm.str();
}



