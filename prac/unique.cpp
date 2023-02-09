#include <iostream>
#include <list>
#include <functional>

using namespace std;

int main(void){
	list<string> lt;

	lt.push_back("b");
    lt.push_back("c");
    lt.push_back("a");
    lt.push_back("q");
    lt.push_back("a");
    lt.push_back("a");
    lt.push_back("a");
    lt.push_back("k");
    lt.push_back("j");
    lt.push_back("p");
    lt.push_back("q");
    lt.push_back("o");
    lt.push_back("e");
    lt.push_back("a");
    lt.push_back("a");

	list<string>::iterator iter;

	cout << "origin) ";
	for (iter = lt.begin(); iter != lt.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl << endl;

	cout << "unique) "; 
	lt.unique();
	for (iter = lt.begin(); iter != lt.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl << endl;

	cout << "sort 1) ";
	lt.sort();
	for (iter = lt.begin(); iter != lt.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl << endl;

	cout << "sort 2) ";
	lt.sort(greater<string>());
    for(iter = lt.begin(); iter!= lt.end(); iter++){
        cout <<*iter << " ";
    }    
    cout << endl << endl;
}


