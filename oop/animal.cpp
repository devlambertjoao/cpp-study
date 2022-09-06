#include <__iterator/wrap_iter.h>
#include <iostream>
#include <stdio.h>

using namespace std;

// Polymorphism

class Animal {
public:
  void animalSound() { cout << "The animal makes a sound"; }
};

class Pig : public Animal {
public:
  void animalSound() { cout << "The pig says: wee wee \n"; }
};
class Dog : public Animal {
public:
  void animalSound() { cout << "The dog says: bow bow \n"; }
};
