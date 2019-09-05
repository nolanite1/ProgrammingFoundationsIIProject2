/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Manifest.cpp
 * Author: sai2468
 * 
 * Created on February 11, 2019, 12:36 PM
 */

#include <regex>

#include "Manifest.h"

Manifest::Manifest() {
    head = NULL;
}

Manifest::Manifest(const Manifest& orig) {
    head = NULL;
}

Manifest::~Manifest() {
}
void Manifest::insertPassenger(string firstName1, string lastName1){
//    Passenger* ptr = new Passenger(firstName1, lastName1);
//    ptr->setNext(head);
//    head = ptr;
//    cout << "Booked " << firstName1 << " " << lastName1 << endl;
//Passenger* ptr = new Passenger(firstName1, lastName1);
    Passenger* ptr = head;
    while(ptr!=NULL){
        if(ptr->getFirstName()==firstName1&&ptr->getLastName()==lastName1){
            cout << "Declined booking for " << firstName1 << " " << lastName1 << ".\n";
            return;
        }
        ptr = ptr->getNext();
    }
    
    
    
    Passenger* temp = head;
    Passenger* prev = temp;
    while((temp!=NULL)&&(temp->getLastName()<lastName1)){
        prev = temp;
        temp = temp->getNext();
    }
    if(head==temp){
        prev = new Passenger();
        prev->setFirstName(firstName1);
        prev->setLastName(lastName1);
        prev->setNext(head);
        head = prev;
    }
    else{
        prev->setNext(new Passenger());
        prev->getNext()->setFirstName(firstName1);
        prev->getNext()->setLastName(lastName1);
        prev->getNext()->setNext(temp);
    }
    cout << "Booked " << firstName1 << " " << lastName1 << endl;
//    count++;
}
void Manifest::deletePassenger(string firstName1, string lastName1){
    Passenger *temp = head;
    Passenger *prev = NULL;
    while((temp!=NULL)&&(temp->getFirstName()!=firstName1)&&(temp->getLastName()!=lastName1)){
        prev = temp;
        temp = temp->getNext();
    }
        if((temp!=NULL)&&(temp==head)){
            head = temp->getNext();
            delete temp;
            cout << "Cancelled booking for " << firstName1 << " " << lastName1 << endl;
        }
        else if(temp!=NULL){
            prev->setNext(temp->getNext());
            delete temp;
            cout << "Cancelled booking for " << firstName1 << " " << lastName1 << endl;
        }
    
    cout << "Could not cancel booking for " << firstName1 << " " << lastName1 << endl;
}
void Manifest::searchPassenger(string firstName1, string lastName1){
    Passenger *temp = head;
    while((temp!=NULL)&&(temp->getFirstName()!=firstName1)&&(temp->getLastName()!=lastName1)){
        temp = temp->getNext();
    }
    if(temp==NULL){
        cout << "Passenger " << firstName1 << " " << lastName1 << " not found." << endl;
    }
    else{
        cout << "Confirmed booking for " << firstName1 << " " << lastName1 << endl;
    }
    
}
void Manifest::print(){
    Passenger *ptr = head;
//    Passenger *min = head;
//    for(int k=0;k<count;k++){
//        if(min->getNext()->getLastName()[0]<min->getLastName()[0]&&(min->getNext()->getAlreadyPrinted()==false)){
//            min = min->getNext();
//        }
    while(ptr!=NULL){
        cout <<ptr->getFirstName() << " " << ptr->getLastName() << " -> ";
        ptr = ptr->getNext();
    }
    cout << "x" << endl;
    }