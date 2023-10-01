#include<bits/stdc++.h>
using namespace std;

class Animal{
	public:
		void sleep() = 0{
			cout<<"Animal is sleep";
		}

};
class Dog : public Animal{
	public:
	  void sleep(){
			cout<<"Dog is sleep";
		}
};

int main(){
    Dog g;
    g.Animal::sleep();

    Animal *ptr = &g;
    ptr->sleep();

	return 0;
}
