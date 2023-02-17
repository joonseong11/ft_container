#ifndef _HPP
# define _HPP
#include <iterator>

namespace ft {

template <typename Iterator> class iterator_traits
{
	typedef typename Iterator::difference_type difference_type;
	typedef typename Iterator::value_type value_type;
	typedef typename Iterator::pointer pointer;
	typedef typename Iterator::reference reference;
	typedef typename Iterator::iterator_category iterator_category;
};

template <typename T> class iterator_traits<T*>{
	typedef ptrdiff_t difference_type;
	typedef T value_type;
	typedef T* pointer;
	typedef T& reference;
	typedef typename std::random_access_iterator_tag iterator_category;
};

template <typename T> class iterator_traits<const T*>{
	typedef ptrdiff_t difference_type;
	typedef T value_type;
	typedef T* pointer;
	typedef T& reference;
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



}

#endif