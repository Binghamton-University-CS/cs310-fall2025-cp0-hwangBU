#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;


class Animal 
{
   public:
      Animal(string speciesName, unsigned int discoveryYear);
      Animal();

      void display() const;

   private:

string species;
      unsigned int year_discovered;
};

#endif




