#ifndef Hare_H
#define Hare_H
#include <vector>

class Hare {
public:
    Hare();
    Hare(std::vector<int> patterns, int position);
    Hare(int* arr, int size, int position);
    void move();
    int getPosition() const; 
    void setPosition(int position);
// private:
    std::vector<int> patterns;
    int position;
};
#endif
