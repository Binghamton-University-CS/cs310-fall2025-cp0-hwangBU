#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"

class AnimalsInZoo {
private:
    int numAnimals;
    Animal animal;

public:
    AnimalsInZoo();                      // Default constructor (no animal)
    AnimalsInZoo(const Animal& a);      // Constructor with one animal

    void display() const;               // Display info
};

#endif // ANIMALSINZOO_H
