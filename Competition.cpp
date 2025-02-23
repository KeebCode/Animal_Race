// Name: Weini Li
// Class: CSCI 135
// Professor Tong yi 
// Program: Project 1 

//Project 3

#include <iostream>
#include <string>
#include <vector>
#include "Competition.hpp"
using namespace std;

Competition::Competition(){
    rabbit = Hare();
    tor = Tortoise();
    lane = Road();
}

Competition::Competition(Hare coney, Tortoise cooter, int length){
    rabbit = coney; 
    tor = cooter;
    lane = Road(length); 
}

void Competition::play(){
    for(int i=1;true;i++){
        lane.mark(rabbit.getPosition(),' ');
        lane.mark(tor.getPosition(), ' ');
        rabbit.move();
        tor.move();

        if(rabbit.getPosition() < 0){
            rabbit.setPosition(0);
        }
        if(tor.getPosition() < 0){
            tor.setPosition(0);
        }
        if(rabbit.getPosition() >= lane.length() - 1){
            rabbit.setPosition(lane.length() - 1);
        }
        if(tor.getPosition() >= lane.length() - 1){
            tor.setPosition(lane.length() - 1);
        }
        lane.mark(rabbit.getPosition(),'H');
        lane.mark(tor.getPosition(), 'T');
        cout << "Round   " << i << ":";
        lane.display();
        if(rabbit.getPosition() == lane.length() - 1 || tor.getPosition() == lane.length() - 1){
            break;
        }
        if(rabbit.getPosition() == tor.getPosition()){
            cout << "Ouch! Tortoise bites hare." << endl;
            rabbit.setPosition(rabbit.getPosition() - 1);
        }
    }
    if(rabbit.getPosition() > lane.length() && tor.getPosition() > lane.length()){
        cout << "It is a tie." << endl;
    }
    else if(rabbit.getPosition() >= lane.length() - 1){
        cout << "Yuck. Hare wins." << endl;
    }
    else if(tor.getPosition() >= lane.length() - 1){
        cout << "Yay!!! Tortorise wins!" << endl;
    }
}