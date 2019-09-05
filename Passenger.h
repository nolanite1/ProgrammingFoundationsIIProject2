/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Passenger.h
 * Author: sai2468
 *
 * Created on February 11, 2019, 12:36 PM
 */
#include <iostream>
using namespace std;
#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger {
public:
    Passenger();
    Passenger(string firstName1, string lastName1);
    Passenger(const Passenger& orig);
    virtual ~Passenger();
    string getFirstName();
    string getLastName();
    void setFirstName(string firstName1);
    void setLastName(string lastName1);
    void setNext(Passenger* passenger);
    Passenger* getNext();
private:
    string firstName;
    string lastName;
    Passenger* Next;
};

#endif /* PASSENGER_H */

