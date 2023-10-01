#include<iostream>
using namespace std;

class Hero{
	private:
	int health;
	public:
	char level; 

	int getHealth(){
		return health;
	}

	int setHealth(int N){
		health = N;
	}

	void print()
	{
		cout<<level;
	}

	
};

int main(){
  // static Allocation
   Hero h1;
   h1.setHealth(70);
   cout<<h1.getHealth()<<endl;

// Dynamic Allocation
   Hero *b = new Hero;
   b->setHealth(80);
   cout<<b->getHealth();

	return 0;
}
