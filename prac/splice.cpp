#include <functional>
#include <iostream>
#include <list>

using namespace std;

int main() {
  list<string> lt1;

  lt1.push_back("a");
  lt1.push_back("b");
  lt1.push_back("c");
  lt1.push_back("d");
  lt1.push_back("e");

  list<string> lt2;
  lt2.push_back("X");
  lt2.push_back("Y");
  lt2.push_back("Z");

  list<string>::iterator iter;

  cout << "[lt1] origin) ";

  for (iter = lt1.begin(); iter != lt1.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;

  cout << "[lt2] orign) ";
  for (iter = lt2.begin(); iter != lt2.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl << endl << endl;

  iter = lt2.begin();
  iter++;

  lt2.splice(iter, lt1);
  cout << "[lt1] splice) ";
  for (iter = lt1.begin(); iter != lt1.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl << endl;

  cout << "lt1.size() : " << lt1.size() << endl;
  cout << endl << endl;

  cout << "[lt2] splice) ";
  for (iter = lt2.begin(); iter != lt2.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl << endl;

  cout << "lt2.size() : " << lt2.size() << endl;
}