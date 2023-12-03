#include <iostream>

class Animal
{
    public : 
        void Walk()
        {
            std::cout << "Animal is walking!" << std::endl;
        }
    Animal() {}
};

class Cat : public Animal
{
    public: 
        Cat() : Animal() {}
        void Walk()
        {
            std::cout << "Cat is walking!" << std::endl;
        }
};

int main()
{
    Cat c;

    Animal* cat;
    cat = &c;
    
    cat->Walk();
    return 0;
}