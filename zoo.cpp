#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;


int main() 
{
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

//new animal added
   Animal animal3("Zebra", 1778);
   animal3.display();


   animal2.display();
   animal1->display();

// Create AnimalsInZoo object with animal2
   AnimalsInZoo zoo1(animal2);
   zoo1.display();

   delete animal1;
}
