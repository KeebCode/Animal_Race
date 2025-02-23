// Name: Weini Li
// Class: CSCI 135
// Professor Tong yi 
// Program: Project 1 

//Project 3

#include <iostream>
#include <string>
#include <vector>
#include "Hare.hpp"
using namespace std;

Hare::Hare(){
    position = 0;
    patterns = {0,0,9,9,-12,1,1,1,-2,-2};
}

Hare::Hare(std::vector<int> patterns, int position){
    this->patterns = patterns;
    this->position = position;
}
Hare::Hare(int* arr, int size, int position){
    for(int i= 0; i<size;i++){
        patterns.push_back(arr[i]);
    }
    this->position = position; 
}
void Hare::move(){
    position += patterns[rand() % patterns.size()];
}
int Hare::getPosition() const{
    return position;
}
void Hare::setPosition(int position){
    this->position = position;
}