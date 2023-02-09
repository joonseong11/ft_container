#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main() {
  deque<string> dq;

  dq.push_front("Dok2");
  dq.push_back("ZICO");
  dq.push_front("tiger_JK");

  cout << "[Default]" << endl;
  deque<string>::iterator iter;

  for (iter = dq.begin(); iter != dq.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl << endl;

  cout << "[test3] insert(coniter ++ twice, 2, INSERT)" << endl;
  ;
  deque<string>::const_iterator coniter = dq.begin();
  coniter += 2;
  dq.insert(coniter, 2, "INSERT");

  for (iter = dq.begin(); iter != dq.end(); iter++) {
    cout << *iter << " ";
  }

  cout << endl << endl;

  cout << "[Test4] dq.end() 의 전전 erase, erase" << endl;
  coniter = dq.end();
  coniter--;
  coniter--;

  dq.erase(coniter);

  for (iter = dq.begin(); iter != dq.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;

  dq.erase(coniter);
  for (iter = dq.begin(); iter != dq.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl << endl;

	cout << "[Test5-1] dq.at(i) : ";

	deque<string>::size_type i;
	for (i = 0; i<dq.size(); i++) {
		cout << dq.at(i) << " ";
	}
	cout << endl;


    cout << "[Test5-2]  dq[i]  : " ;
 
    for(i=0 ; i<dq.size() ; i++){
		cout << dq[i] << " ";
	}
	cout << endl;
}
