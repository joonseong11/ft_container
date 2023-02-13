#include <iostream>

class A {
	public:
	int num;
};

int main() {

	A *a = new A;
	std::cout<< a->num;
	
}