#ifndef FT_STACK_HPP
#define FT_STACK_HPP
#include <vector>

namespace ft {

template <class T, class Container = std::vector<T>> class stack {
public:
  typedef Container container_type;
  typedef typename Container::value_type value_type;
  typedef typename Container::reference reference;
  typedef typename Container::const_reference const_reference;
  typedef typename Container::size_type size_type;

protected:
  container_type c;

public:
  stack() : c() {}
  explicit stack(const Container &s) : c(s) {}

  bool empty() const { return c.empty(); }
  size_type size() const { return c.size(); }
  reference top() { return c.back(); }
  const_reference top() const { return c.back(); }
  void push(const value_type &x) { c.push_back(x); }
  void pop() { c.pop_back; }
};

template <class Tp, class Container>
bool operator==(const stack<Tp, Container> &x, const stack<Tp, Container> &y) {
  return x.c == y.c;
}

template <class Tp, class Container>
bool operator<(const stack<Tp, Container> &x, const stack<Tp, Container> &y) {
  return x.c < y.c;
}

template <class Tp, class Container>
bool operator!=(const stack<Tp, Container> &x, const stack<Tp, Container> &y) {
  return !(x == y);
}

template <class Tp, class Container>
bool operator>(const stack<Tp, Container> &x, const stack<Tp, Container> &y) {
  return y < x;
}

template <class Tp, class Container>
bool operator<=(const stack<Tp, Container> &x, const stack<Tp, Container> &y) {
  return !(y < x);
}

template <class Tp, class Container>
bool operator>=(const stack<Tp, Container> &x, const stack<Tp, Container> &y) {
  return !(x < y);
}

} // namespace ft
#endif