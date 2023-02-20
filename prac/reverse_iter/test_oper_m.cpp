#include <iostream>     // std::cout
#include <iterator>     // std::reverse_iterator
#include <vector>       // std::vector

int main () {
  std::vector<int> myvector;
  for (int i=0; i<10; i++) myvector.push_back(i);	// myvector: 0 1 2 3 4 5 6 7 8 9

  typedef std::vector<int>::iterator iter_type;
	std::reverse_iterator<iter_type> reverse_iterator;
  reverse_iterator = myvector.rend() - 3;
  std::cout << "myvector.rend()-3 points to:" << *reverse_iterator << '\n';
}