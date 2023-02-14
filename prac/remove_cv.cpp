#include <iostream>
#include <type_traits>

int main() {
	typedef const volatile char cvchar;
	cvchar o = 0;
	std::remove_cv<cvchar>::type a;
	std::remove_cv<char* const>::type b;
	std::remove_cv<const char*>::type c;

	if (std::is_const<decltype(o)>::value)
		std::cout << "type of a is const" << std::endl;
	else
		std::cout << "type of a is not const" << std::endl;
	
	if (std::is_volatile<decltype(o)>::value)
		std::cout << "type of a is volatile" << std::endl;
	else
	 	std::cout << "type of a is not volatile" << std::endl;
}