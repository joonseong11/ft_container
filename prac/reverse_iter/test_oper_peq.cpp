#include <iostream>     // std::cout
#include <iterator>     // std::reverse_iterator
#include <vector>       // std::vector

int main () {
  std::vector<int> myvector;
  for (int i=0; i<10; i++) myvector.push_back(i);	// myvector: 0 1 2 3 4 5 6 7 8 9

  typedef std::vector<int>::iterator iter_type;
  std::reverse_iterator<iter_type> reverse_iterator = myvector.rbegin();
  reverse_iterator += 2;
  std::cout << "The third element frome the end is : " << *reverse_iterator << '\n';
}