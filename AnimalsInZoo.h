#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"

class AnimalsInZoo 
{
private:
    int numAnimals;
    Animal animal;

public:

//Default constructor (no animal)
    AnimalsInZoo();

 // Constructor with one animal
    AnimalsInZoo(const Animal& a);

// Display info
    void display() const;

};

#endif // ANIMALSINZOO_H
