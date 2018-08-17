#include "Shop.h"
#include "defs.h"

Shop::Shop() { }

Shop::~Shop() {
  for (int i = 0; i < customers.getSize(); i++) {
    delete customers[i];
  }
  for (int i = 0; i < mechanics.getSize(); i++) {
    delete mechanics[i];
  }
}

Shop& Shop::operator+=(Customer* c) { 
    customers += c; 
    return *this;
}

Shop& Shop::operator-=(Customer* c) { 
    customers -= c; 
    return *this;
}


//Get customer function
//INPUT: integer ID number
//OUPUT:the customer with that ID
Customer* Shop::getCustomer(int id)  
{ 
  for (int i=0; i<customers.getSize(); i++)
  {
    if(customers[i]->getId() == id)
    {
      return customers[i];
    }
  }
} 


LinkedList<Customer> Shop::getCustomers() { return customers; }

Shop& Shop::operator+=(Mechanic* m) {    
        mechanics +=m;
        return *this;

    return *this;
}

LinkedList<Mechanic> Shop::getMechanics()  { return mechanics; }
