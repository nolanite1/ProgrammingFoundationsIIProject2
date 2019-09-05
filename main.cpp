/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sai2468
 *
 * Created on February 11, 2019, 12:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "Passenger.h"
#include "Manifest.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ifstream din;
    int command;
    string firstName;
    string lastName;
    Manifest list;
    if(din.is_open()){
        while(din >> command >> firstName >> lastName);
    }
//    cin >> command;
    while(command!=5){
        if(command==1){
            cin>>firstName>>lastName;
            list.insertPassenger(firstName,lastName);
        }
        else if(command==2){
            cin>>firstName>>lastName;
            list.deletePassenger(firstName,lastName);
        }
        else if(command==3){
            cin>>firstName>>lastName;
            list.searchPassenger(firstName, lastName);
        }
        else if(command==4){
            list.print();
        }
        cin >> command;
    }
    return 0;

}
