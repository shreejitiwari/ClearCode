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

    void myname()
    {
      cout<<"I am boboi"<<endl;
    }
};

int main() {
    Pig myPig;
    Animal *myAnimal = &myPig;

    Animal * animal, * animal2;
    Dog myDog;
    animal2 = new Dog();
    animal = &(myDog);
    animal->animalSound();
    animal2->animalSound();
    myDog.myname();


    myDog.Animal::animalSound();
    myPig.animalSound();
    return 0;
}
