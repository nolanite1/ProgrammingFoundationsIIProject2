/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Manifest.h
 * Author: sai2468
 *
 * Created on February 11, 2019, 12:36 PM
 */
#include "Passenger.h"
#ifndef MANIFEST_H
#define MANIFEST_H

class Manifest {
public:
    Manifest();
    Manifest(const Manifest& orig);
    virtual ~Manifest();
    void insertPassenger(string firstName1, string lastName1);
    void deletePassenger(string firstName1, string lastName1);
    void searchPassenger(string firstName1, string lastName1);
    void print();
private:
    Passenger* head;
};

#endif /* MANIFEST_H */

