#include <iostream>

#include<vector>
using namespace std;
 
int main(void){
	vector<int> v;

	v.push_back(21);
	v.push_back(32);

    v.push_back(53);
    v.push_back(64);
    v.push_back(15);

	cout << "ex1-1) [v.at(i)] size_type : ";
	for (vector<int>::size_type i = 0; i<v.size(); i++) {
		cout << v.at(i) << " "; 
	}
	cout << endl;
    cout << "ex1-1) [ v[i] ] size_type : " ;
	for (vector<int>::size_type i = 0; i<v.size() + 1; i++) {
		cout << v[i] << " ";
	}
	cout << endl << endl;

	cout << "ex2-1) [v.at(i)] int : ";
	for (int i = 0; i < v.size() ; i++) {
		cout << v.at(i) << " ";
	}
	cout << endl;
	cout << "ex2-2) [v[i] ] int : ";
	for (int i = 0; i< v.size() ; i++ ) {
		cout << v[i] << " ";
	}
	cout << endl << endl;

	cout << "ex3) [*iter] iterator : ";
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++){
		cout << *iter << " ";
	}
	cout << endl << endl;
}