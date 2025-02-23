// Name: Weini Li
// Class: CSCI 135
// Professor Tong yi 
// Program: Project 1 

//Project 3

#include <iostream>
#include <string>
#include <vector>
#include "Tortoise.hpp"
using namespace std;

Tortoise::Tortoise(){
    position = 0;
    patterns = {3,3,3,3,3,-6,-6,1,1,1};
}

Tortoise::Tortoise(int* arr, int size, int position){
    for(int i= 0; i<size;i++){
        patterns.push_back(arr[i]);
    }
    this->position = position; 
}

Tortoise::Tortoise(std::vector<int> patterns, int position){
    this->patterns = patterns;
    this->position = position;
}

void Tortoise::move(){
    position += patterns[rand() % patterns.size()];
}
int Tortoise::getPosition() const{
    return position;
}
void Tortoise::setPosition(int position){
    this->position = position;
}