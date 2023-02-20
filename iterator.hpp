#ifndef _HPP
#define _HPP
#include <iterator>

namespace ft {

template <typename Iterator> class iterator_traits {
  typedef typename Iterator::difference_type difference_type;
  typedef typename Iterator::value_type value_type;
  typedef typename Iterator::pointer pointer;
  typedef typename Iterator::reference reference;
  typedef typename Iterator::iterator_category iterator_category;
};

template <typename T> class iterator_traits<T *> {
  typedef ptrdiff_t difference_type;
  typedef T value_type;
  typedef T *pointer;
  typedef T &reference;
  typedef typename std::random_access_iterator_tag iterator_category;
};

template <typename T> class iterator_traits<const T *> {
  typedef ptrdiff_t difference_type;
  typedef T value_type;
  typedef T *pointer;
  typedef T &reference;
  typedef typename std::random_access_iterator_tag iterator_category;
};

// class iterator
// {
// 	private:
// 	public:
// 		iterator(void);
// 		iterator(const iterator& src);
// 		virtual ~iterator(void);
// 		iterator& operator=(iterator const& rhs);
// };

template <typename Iterator> class reverse_iterator {
protected:
  Iterator current;

public:
  typedef Iterator iterator_type;
  typedef
      typename iterator_traits<Iterator>::iterator_category iterator_category;
  typedef typename iterator_traits<Iterator>::value_type value_type;
  typedef typename iterator_traits<Iterator>::difference_type difference_type;
  typedef typename iterator_traits<Iterator>::pointer pointer;
  typedef typename iterator_traits<Iterator>::reference reference;
  typedef reverse_iterator<Iterator> Self;

public:
  reverse_iterator<Iterator>() {}
  explicit reverse_iterator(iterator_type it) : current(it) {}
  template <typename Iter>
  reverse_iterator(const reverse_iterator<Iter> &rev_it)
      : current(rev_it.base()) {}

  iterator_type base() const { return current; }
  reference operator*() const {
    Iterator tmp = current;
    return *--tmp;
  };
  reverse_iterator operator+(difference_type n) const {
    return Self(current - n);
  }
  reverse_iterator &operator++() {
    --current;
    return *this;
  };
  reverse_iterator operator++(int) {
    Self tmp = *this;
    --current;
    return tmp;
  };
  reverse_iterator &operator+=(difference_type n) {
    current -= n;
    return *this;
  }
  reverse_iterator operator-(difference_type n) const {
    return Self(current + n);
  }
  reverse_iterator &operator--() {
    ++current;
    return *this;
  }
  reverse_iterator operator--(int) {
    Self tmp = *this;
    ++current;
    return tmp;
  };
  reverse_iterator &operator-=(difference_type n) {
    current += n;
    return *this;
  }
  pointer operator->() const { return &(operator*()); }
  reference operator[](difference_type n) const { return *(*this + n); }
};

template <class Iterator>
bool operator==(const reverse_iterator<Iterator> &lhs,
                const reverse_iterator<Iterator> &rhs) {
  return lhs.base() == rhs.base();
}
template <class Iterator>
bool operator!=(const reverse_iterator<Iterator> &lhs,
                const reverse_iterator<Iterator> &rhs) {
  return !(lhs.base() == rhs.base());
}
template <class Iterator>
bool operator<(const reverse_iterator<Iterator> &lhs,
               const reverse_iterator<Iterator> &rhs) {
  return rhs.base() < lhs.base();
}
template <class Iterator>
bool operator<=(const reverse_iterator<Iterator> &lhs,
                const reverse_iterator<Iterator> &rhs) {
  return !(rhs < lhs);
}
template <class Iterator>
bool operator>(const reverse_iterator<Iterator> &lhs,
               const reverse_iterator<Iterator> &rhs) {
  return rhs < lhs;
}
template <class Iterator>
bool operator>=(const reverse_iterator<Iterator> &lhs,
                const reverse_iterator<Iterator> &rhs) {
  return !(lhs < rhs);
}

template <class Iterator>
reverse_iterator<Iterator>
operator+(typename reverse_iterator<Iterator>::difference_type n,
          const reverse_iterator<Iterator> &rev_it) {
  return reverse_iterator<Iterator>(rev_it.base() - n);
}
template <class Iterator>
typename reverse_iterator<Iterator>::difference_type
operator-(const reverse_iterator<Iterator> &lhs,
          const reverse_iterator<Iterator> &rhs) {
  return rhs.base() - lhs.base();
}

} // namespace ft

#endif