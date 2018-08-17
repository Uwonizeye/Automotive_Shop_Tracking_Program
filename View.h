#ifndef VIEW_H
#define VIEW_H

#include "LinkedList.h"
#include "Mechanic.h"
#include "Customer.h"

class View {

    
public:
        void mainMenu(int&);
        void printCustomers(const LinkedList<Customer> &) const;
        void pause() const;
        void promptUserInfo(string&, string&, string&, string&);
        void promptUserId(int&);
        void displayInvalid();
	void promptVehicleInfo(string&, string&, string&, int&, int&, int&, bool&, int);
        void promptVehicle(int, int&);
	void promptVehicleType(int &);
        void printMechanics(const LinkedList<Mechanic> &) const;
    private:
        int readInt() const;
};

#endif
