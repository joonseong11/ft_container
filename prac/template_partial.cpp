#include <iostream>
#include <typeinfo>
// #include <boost/type_index.hpp>
using namespace std;
// using namespace boost::typeindex;
 
template<typename T, int N = 10> class Stack {
	public:
    T buff[N];
	int num = N;
};
 
// 부분전문화: default parameter는 표기하지 않는다.
template<typename T, int N> class Stack<T*, N> {
	public:
    T buff[N];
	int num = N;
	
};
 
int main()
{
    Stack<int> s1;   // N == 10
    Stack<int*> s2;  // N == 10
 
	std::cout << s1.num << endl;
	std::cout << s2.num << endl;
    return 0;
}