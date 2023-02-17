#include <cstddef>

namespace ft {

template <bool B, class T = void> struct enable_if {};
template <typename T> struct enable_if<true, T> {
  typedef T type;
};

template <typename _Tp> struct remove_const {
  typedef _Tp type;
};

template <typename _Tp> struct remove_const<_Tp const> {
  typedef _Tp type;
};

/// remove_volatile
template <typename _Tp> struct remove_volatile {
  typedef _Tp type;
};

template <typename _Tp> struct remove_volatile<_Tp volatile> {
  typedef _Tp type;
};

template <typename _Tp> struct remove_cv {
  typedef typename remove_const<typename remove_volatile<_Tp>::type>::type type;
};

template <typename Tp, Tp v> struct integral_constant {
  static const Tp value = v;
  typedef Tp value_type;
  typedef integral_constant type;
  operator value_type() const { return value; }
  //   constexpr value_type operator()() const { return value; }
};

// template <class T, T v> struct integral_constant;
typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;

// template <bool B>
// using bool_constant = integral_constant<bool, B>;
// typedef bool_constant<true> true_type;
// typedef bool_constant<false> false_type;

template <typename Tp> struct lib_is_integral : public false_type {};
template <> struct lib_is_integral<bool> : public true_type {};
template <> struct lib_is_integral<char> : public true_type {};
template <> struct lib_is_integral<signed char> : public true_type {};
template <> struct lib_is_integral<unsigned char> : public true_type {};
template <> struct lib_is_integral<wchar_t> : public true_type {};
template <> struct lib_is_integral<char16_t> : public true_type {};
template <> struct lib_is_integral<char32_t> : public true_type {};
template <> struct lib_is_integral<short> : public true_type {};
template <> struct lib_is_integral<unsigned short> : public true_type {};
template <> struct lib_is_integral<int> : public true_type {};
template <> struct lib_is_integral<unsigned int> : public true_type {};
template <> struct lib_is_integral<long> : public true_type {};
template <> struct lib_is_integral<unsigned long> : public true_type {};
template <> struct lib_is_integral<long long> : public true_type {};
template <> struct lib_is_integral<unsigned long long> : public true_type {};
template <> struct lib_is_integral<__int128_t> : public true_type {};
template <> struct lib_is_integral<__uint128_t> : public true_type {};

template <typename Tp>
struct is_integral : public lib_is_integral<typename remove_cv<Tp>::type> {};

} // namespace ft
