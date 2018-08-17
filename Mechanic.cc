#include <iostream>
using namespace std;
#include "Mechanic.h"

int Mechanic::nextId = 5000;

Mechanic::Mechanic(string fname, string lname, string add, string pnum, int sal) : 
        Person(fname,lname,add,pnum), id(Mechanic::nextId++), salary(sal) { }


Mechanic::Mechanic(const Mechanic & mec)
	:Person(mec), id(mec.id), salary(mec.salary){ }


int Mechanic::getId() const { return id; }

//Overloading of the << operator
//INPUT:references to pointers of(1) output stream (2) list of mechanic 
//OUTPUT: mechanic information
ostream& operator<<(ostream& output, Mechanic& m)
{
    ostringstream name;
    name << m.firstName << " " << m.lastName;

    output << "Employee ID " << m.id << endl << endl
           << "    Name: " << setw(40) << name.str() << endl 
           << "    Address: " << setw(37) << m.address << endl
           << "    Phone Number: " << setw(32) << m.phoneNumber << endl
           << "    Salary: " << setw(38) << m.salary << endl;
    return output;
}

//Overloading of the < operator
//INPUT:references to a pointer of a mechanic 
//OUTPUT: true or false

bool Mechanic:: operator<(Mechanic & mec)
{
  return salary < mec.salary;
}

//Overloading of the > operator
//INPUT:references to a pointer of a mechanic 
//OUTPUT: true or false

bool Mechanic:: operator>(Mechanic & mec)
{
  return salary > mec.salary;
}


