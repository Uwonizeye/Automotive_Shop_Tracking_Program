#ifndef SHOP_H
#define SHOP_H

#define MAX_MECHANICS    5

#include "Mechanic.h"
#include "Customer.h"
#include "LinkedList.h"

class Shop{

    public:
        Shop();
        ~Shop();
	//Customers
        Shop& operator+=(Customer*);  
	Shop& operator-=(Customer*);      
        Customer* getCustomer(int);
        LinkedList<Customer> getCustomers();

	//Mechanics
        Shop& operator+=(Mechanic*);
        LinkedList<Mechanic> getMechanics();

    private:
        LinkedList<Customer> customers;
	LinkedList<Mechanic> mechanics;

};

#endif
