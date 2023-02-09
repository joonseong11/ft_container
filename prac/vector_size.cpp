#include<iostream>
#include<vector>
using namespace std;
 
int main(void){
	vector<int> v;

	cout << "[ v[i], v.size(), v.capacity() ]" << endl;
	for (int i = 0; i <=64; i++) {
		v.push_back(i+1);
		cout << "[" << v[i] << ", " << v.size() << ", "<< v.capacity() << "]" << endl;
	}
}