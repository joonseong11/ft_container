#include <type_traits>

namespace ft {

template <typename T, T v> struct integral_constant {
	static constexpr T value = v;
	typedef T value_type;
	typedef integral_constant<T, v> type;
	constexpr operator T() { return v; }
};

template <typename T> struct is_integral : public integral_constant {
	private:
		const T value;
}


}

