#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::vector<int> myvector;
  for (int i = 0; i<10; i++) myvector.push_back(i);
  typedef std::vector<int>::iterator iter_type;

  std::reverse_iterator<iter_type> rev_iterator = myvector.rbegin();
  std::cout << "the fourth element from the end is: " << rev_iterator[0] << '\n';

}