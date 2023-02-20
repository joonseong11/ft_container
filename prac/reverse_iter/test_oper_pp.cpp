
#include <iostream>     // std::cout
#include <iterator>     // std::reverse_iterator
#include <vector>       // std::vector

int main () {
	std::vector<int> myvector;
	for (int i = 0; i<10; i++) myvector.push_back(i);
	for (std::vector<int>::iterator iter = myvector.begin(); iter != myvector.end(); iter++)
		std::cout << *iter << ' ';

	typedef std::vector<int>::iterator iter_type;
	iter_type from(myvector.begin());
	iter_type until(myvector.end());
	std::reverse_iterator<iter_type> rev_until(from);
	std::reverse_iterator<iter_type> rev_from(until);

	std::cout << "myvec : ";
	while (rev_from != rev_until) {
		std::cout << ' ' << *rev_from;
		++rev_from;
	}
	std::cout << '\n';

}