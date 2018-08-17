 #include "Motorcycle.h"

Motorcycle::Motorcycle(string ma, string mo, string col, int y, int m, bool sdc)

: Vehicle(ma, mo, col, y, m), sideCar(sdc){ }

 

Motorcycle::Motorcycle(const Motorcycle& m)

: Vehicle(m.getMake(), m.getModel(), m.getColour(), m.getYear(), m.getMilage()), sideCar(m.sideCar){ }



// Virtual Function to print the Vehicle including its hierarchy

string Motorcycle::toString()
{
    stringstream strm;

    strm << "\t" << left << setw(17) << "MOTORCYCLE:" << this->getMake() << " "<< this->getModel()<< " " << this->getColour() <<" "<< this->getYear()<<" "<< this->getMilage()<<" "<< (sideCar?", has a sideCar":", doesn't have any sideCar");
    return strm.str();
}
