#include <iostream>
#include <list>

using namespace std;

bool predicate(int num) {
	return num>=100 && num <= 200;
}

int main() {
	list<int> lt;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(108);
    lt.push_back(60);
    lt.push_back(10);
    lt.push_back(100);
    lt.push_back(40);    
    lt.push_back(50);
    lt.push_back(10);
    lt.push_back(108);
    lt.push_back(30);    
    lt.push_back(220);
    lt.push_back(10);

	list<int>::iterator iter;
	
	cout<<"origin)";
	for(iter = lt.begin(); iter!=lt.end(); iter++){
		cout<< *iter << " ";
	}
	cout << endl << endl;

	lt.remove(108);

	cout<< "test2)";
	for (iter = lt.begin(); iter!= lt.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl << endl;
	return 0;
}