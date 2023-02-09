#include <iostream>
#include <deque>
 
using namespace std;

int main() {
	deque<int> dq;

	for ( int i = 0; i < 5; i++) {
		dq.push_back((i+1) * 10);
	}

	deque<int>::iterator iter;

	cout << "[Default] : ";
	
    for(iter = dq.begin(); iter != dq.end() ; iter++){
        cout << *iter << " ";
    }
    cout << endl << endl;

    cout << "[Test1] push_front & end : " ;
 
    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(100);
    dq.push_back(200);
    
    for(iter = dq.begin(); iter != dq.end() ; iter++){
        cout << *iter << " ";
    }
    cout << endl ;
    
    cout << "[Test2] reverse_iterator : ";
    
	deque<int>::reverse_iterator riter;

	for (riter = dq.rbegin(); riter != dq.rend() ; riter++) {
		cout << *riter << " ";
	}
	cout << endl;
}