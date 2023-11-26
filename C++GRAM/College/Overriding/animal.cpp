#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
  public:
    virtual void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    virtual void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n";
    }
};

int main() {
//   Animal myAnimal;
//   Pig myPig;

    Animal * animal, * animal2;
    Dog myDog;
    animal2 = new Dog();
    animal = &(myDog);
    animal->animalSound();
    animal2->animalSound();
//   myAnimal.animalSound();
//   myPig.animalSound();
    myDog.Animal::animalSound();
    return 0;
}
