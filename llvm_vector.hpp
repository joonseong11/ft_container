namespace ft {
template <class T, class Allocator = allocator<T>> class vector {
public:
  typedef T value_type;
  typedef Allocator allocator_type;
  typedef typename allocator_type::reference reference;
  typedef typename allocator_type::const_reference const_reference;
  typedef implementation - defined iterator;
  typedef implementation - defined const_iterator;
  typedef typename allocator_type::size_type size_type;
  typedef typename allocator_type::difference_type difference_type;
  typedef typename allocator_type::pointer pointer;
  typedef typename allocator_type::const_pointer const_pointer;
  typedef std::reverse_iterator<iterator> reverse_iterator;
  typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
  explicit vector(const allocator_type & = allocator_type());
  explicit vector(size_type n);
  vector(size_type n, const value_type &value,
         const allocator_type & = allocator_type());
  template <class InputIterator>
  vector(InputIterator first, InputIterator last,
         const allocator_type & = allocator_type());
  vector(const vector &x);
//   vector(vector &&x);
  //   vector(initializer_list<value_type> il);
  //   vector(initializer_list<value_type> il, const allocator_type &a);
  ~vector();
  vector &operator=(const vector &x);
//   vector &operator=(vector &&x);
  //   vector &operator=(initializer_list<value_type> il);
  template <class InputIterator>
  void assign(InputIterator first, InputIterator last);
  void assign(size_type n, const value_type &u);
  //   void assign(initializer_list<value_type> il);
  allocator_type get_allocator() const;
  iterator begin();
  const_iterator begin() const;
  iterator end();
  const_iterator end() const;
  reverse_iterator rbegin();
  const_reverse_iterator rbegin() const;
  reverse_iterator rend();
  const_reverse_iterator rend() const;
  const_iterator cbegin() const;
  const_iterator cend() const;
  const_reverse_iterator crbegin() const;
  const_reverse_iterator crend() const;
  size_type size() const;
  size_type max_size() const;
  size_type capacity() const;
  bool empty() const;
  void reserve(size_type n);
//   void shrink_to_fit();
  reference operator[](size_type n);
  const_reference operator[](size_type n) const;
  reference at(size_type n);
  const_reference at(size_type n) const;
  reference front();
  const_reference front() const;
  reference back();
  const_reference back() const;
  value_type *data();
  const value_type *data() const;
  void push_back(const value_type &x);
  void push_back(value_type &&x);
  template <class... Args> void emplace_back(Args &&...args);
  void pop_back();
  template <class... Args>
  iterator emplace(const_iterator position, Args &&...args);
  iterator insert(const_iterator position, const value_type &x);
  iterator insert(const_iterator position, value_type &&x);
  iterator insert(const_iterator position, size_type n, const value_type &x);
  template <class InputIterator>
  iterator insert(const_iterator position, InputIterator first,
                  InputIterator last);
  iterator insert(const_iterator position, initializer_list<value_type> il);
  iterator erase(const_iterator position);
  iterator erase(const_iterator first, const_iterator last);
  void clear();
  void resize(size_type sz);
  void resize(size_type sz, const value_type &c);
  void swap(vector &);
  bool __invariants() const;
};
} // namespace ft
