namespace ft

template<typename T>
class MyVector {
  public:
    MyVector(): m_size(0), m_capacity(0), m_data(0) {}
    ~MyVector() { delete[] m_data; }
    void push_back(const T& value) {
      if (m_size == m_capacity) {
        resize();
      }
      m_data[m_size++] = value;
    }
    void pop_back() {
      --m_size;
    }
    T& operator[](size_t index) {
      return m_data[index];
    }
    const T& operator[](size_t index) const {
      return m_data[index];
    }
    size_t size() const {
      return m_size;
    }
  private:
    void resize() {
      m_capacity = m_capacity ? m_capacity * 2 : 1;
      T* new_data = new T[m_capacity];
      for (size_t i = 0; i < m_size; ++i) {
        new_data[i] = m_data[i];
      }
      delete[] m_data;
      m_data = new_data;
    }
    size_t m_size;
    size_t m_capacity;
    T* m_data;
};