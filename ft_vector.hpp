#include <iterator>
#include <memory>

namespace ft {

template <class T, class Allocator = allocator<T>> class vector {
private:
public:
  typedef T value_type;
  typedef Alloc allocator_type;
};
} // namespace ft
vector<vector<int>> v;
