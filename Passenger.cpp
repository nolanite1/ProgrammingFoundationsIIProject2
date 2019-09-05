/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Passenger.cpp
 * Author: sai2468
 * 
 * Created on February 11, 2019, 12:36 PM
 */

#include "Passenger.h"
Passenger::Passenger(){
    firstName = "no First Name";
    lastName = "no Last Name";
    bool alreadyPrinted = false;
    Next = NULL;
}
Passenger::Passenger(string firstName1, string lastName1) {
    firstName = firstName1;
    lastName = lastName1;
    Next = NULL;
}

Passenger::Passenger(const Passenger& orig) {
    firstName = orig.firstName;
    lastName = orig.lastName;
    Next = orig.Next;
}
string Passenger::getFirstName(){
    return firstName;
}
string Passenger::getLastName(){
    return lastName;
}
void Passenger::setFirstName(string firstName1){
    firstName = firstName1;
}
void Passenger::setLastName(string lastName1){
    lastName = lastName1;
}
void Passenger::setNext(Passenger* passenger){
    Next = passenger;
}
Passenger* Passenger::getNext(){
    return Next;
}
Passenger::~Passenger() {
}

