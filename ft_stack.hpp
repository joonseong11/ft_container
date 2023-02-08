#include <cstddef>
#include <deque>

template <class T, class Container = std::deque<T>> class stack {
public:
  typedef T value_type;
  typedef Container Container_type;
  typedef size_t size_type;

  explicit stack (const Container_type & ctnr = Container_type())
  {
	_ctnr = ctnr;
  }
}
