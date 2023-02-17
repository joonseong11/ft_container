#include <iterator>
#include <memory>

namespace ft {

template <class Tp, class Alloc = std::allocator<Tp> > class vector {
private:
public:
  typedef Tp value_type;
  typedef Alloc allocator_type;
  typedef allocator_type::reference reference;
  typedef allocator_type::const_reference const_reference;
  typedef allocator_type::pointer pointer;
  typedef allocator_type::const_pointer const_pointer; 
  typedef random_access_iterator.value_type iterator;
  typedef const random_access_iterator.value_type const_iterator;
  typedef std::reverse_iterator<iterator> reverse_iterator;
  typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
  typedef iterator_traits<iterator>::difference_type difference_type;
  typedef ?? difference_type 

public:
  iterator begin() { return iterator (start); }
  const_iterator begin() const { return const_iterator (start); }
  iterator end() { return iterator (finish); }
  const_iterator end() const { return const_iterator (finish); }
  
  reverse_iterator rbegin() { return reverse_iterator(end()); }
  const_reverse_iterator rbegin() const { return const_reverse_iterator(end()); }
  reverse_iterator rend() { return reverse_iterator(begin()); }
  const_reverse_iterator rend() const { return const_reverse_iterator(begin()); }

  size_type size() const { return size_type(end() - begin()); }
  size_type max_size() const { return size_type(-1) / sizeof(Tp); }
  size_type capacity() const {
    return size_type(const_iterator(end_of_storage) - begin()); 
  }
  bool empty() const { return begin() == end(); }

  reference at(size_type n) { 
    range_check(n);
    return (*this)[n];
  }
  const_reference at(size_type n) const {
    range_check(n);
    return (*this)[n];
  }

  explicit vector(const allocator_type& a = allocator_type()) : Base(a) {}
};





} // namespace ft