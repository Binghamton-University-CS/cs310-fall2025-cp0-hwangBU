#include <iostream>
#include "AnimalsInZoo.h"

// Default constructor
AnimalsInZoo::AnimalsInZoo() : numAnimals(0), animal() {}

// Constructor with an Animal object
AnimalsInZoo::AnimalsInZoo(const Animal& a) : numAnimals(1), animal(a) {}

// Display function
void AnimalsInZoo::display() const 
{
    cout << "Number of animals in zoo: " << numAnimals << endl;
    if (numAnimals == 1) 
    {
        animal.display();
    }
}
