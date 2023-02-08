#include <algorithm>
#include <new>

namespace ft {
	template <typename T, typename Allocator = std::allocator<T>> {
		public:
			using size_type = size_t;
			using value_type = T;
			using iterator = value_type*;
			using const_iterator = const iterator;
			using reference = value_type&;
			using const_reference = const reference;

			Vector() { create(); } // default constructor
			
			explicit Vector(size_type n, const value_type& val = value_type()) {
				create(n, val);
			} // overloaded constructor, explicit

			Vector(std::initializer_list<value_type> l) { create(l); }
			// overloaded constructor, using initializer_list

			Vector(const Vector& v) { create(v.begin(), v.end()); }
			// copy constructor 

			Vector& operator=(const Vector& v);
			// 

			Vector(Vector&& v) noexcept { swap(v); }

			Vector& operator=(Vector&& v) noexcept;

			~Vector() noexcept { destroy(); }

			T& operator[](size_type i) { return data_[i]; }

			const T& operator[](size_type i) const { return data_[i]; }
			
			void push_back(const T& t) {
				if (avail_ == limit_)
					grow();
				unchecked_append(t);
			}

			template<typename ... Args>
			void emplace_back(Args&& ...args) {
				if (avail_ == limit_)
					grow();
				unchecked_append(value_type{args...});
			}

			size_type size() const { return avail_ - data_;;}

			iterator begin() { return data_; }

			iterator begin() const { return_; }

			iterator end() { return avail_; }

			iterator end() const { return avail_; }

			void clear() { destroy(); }

			bool empty() const { return data_ == avail_; }

			private:
			iterator data_ = nullptr;
			iterator avail_ = nullptr;
			iterator limit_ = nullptr;
			Allocator alloc_;

			void destroy() noexcept;

			void grow();
			void unchecked_append(const T&);
			
			void swap(Vector& rhs) noexcept {
				std::swap(data_, rhs.data_);
				std::swap(avail_, rhs.avail_);
				std::swap(limit_, rhs.limit_);
				std::swap(alloc_, rhs.alloc_);
			}
	}
}