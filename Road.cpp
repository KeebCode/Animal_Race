// Name: Weini Li
// Class: CSCI 135
// Professor Tong yi 
// Program: Project 1 

//Project 3

#include <iostream>
#include <string>
#include <vector>
#include "Road.hpp"
using namespace std;

Road::Road():Road(70){}

Road::Road(int length){
    if(length < 1){
        length = 70;
    }
    for(int i=0;i<length;i++){
        blocks.push_back(' ');
    }
}

void Road::mark(int index, char ch){
    blocks[index] = ch; //setter, setting ch into blocks[(some index)]
}

void Road::display() const{ //getters, printing out each blocks
    for(int i=0;i<blocks.size();i++){
        cout << blocks[i];
    }
    cout << endl;
}

int Road::length() const{
    return blocks.size();
}