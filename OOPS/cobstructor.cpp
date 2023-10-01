#include<iostream>
using namespace std;

class Hero {
private:
    int health;

public:
    // Constructor
    // Default -> No returnType, No Parameter
    Hero() {
        cout << "Constructor call" << endl;
    }

    // Parameterized Constructor
    Hero(int n) {
        this->health = n;
        cout << health;
    }

    // Copy Constructor
    Hero(const Hero& other) {
        this->health = other.health;
    }

    // Getter method to access the health property
    int getHealth() const {
        return health;
    }
};

int main() {
    Hero suresh(70);
    Hero r(suresh);

    cout << r.getHealth();

    // Dynamically
    // Hero *b = new Hero();

    return 0;
}
