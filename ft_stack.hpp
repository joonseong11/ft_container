#include <deque>

template <class T, class Container = std::deque<T> > class stack {
	friend bool operator== (const stack&, const stack&);
	friend bool operator< (const stack&, const stack&);

	public:
	
	typedef typename value_type      value_type;
	typedef typename size_type       size_type;
	typedef                          container_type;


  	typedef typename _Sequence::reference       reference;
  	typedef typename _Sequence::const_reference const_reference;
}
