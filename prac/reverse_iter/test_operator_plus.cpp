// reverse_iterator::operator+ example
#include <iostream>     // std::cout
#include <iterator>     // std::reverse_iterator
#include <vector>       // std::vector

int main() {
	std::vector<int> myvector;
	for (int i = 0; i<10; i++) myvector.push_back((i));

	typedef std::vector<int>::iterator iter_type;
	std::reverse_iterator<iter_type> rev_it;
	rev_it = myvector.rbegin() + 3;
	std::cout << "the fourth element frome the end is : " << *rev_it << std::endl;
}