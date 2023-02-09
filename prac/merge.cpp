#include <functional>
#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> lt1;

  lt1.push_back(100);
  lt1.push_back(200);
  lt1.push_back(300);
  lt1.push_back(400);
  lt1.push_back(500);

  list<int> lt2;

  lt2.push_back(111);
  lt2.push_back(444);
  lt2.push_back(555);

  list<int>::iterator iter;

  cout << "[lt1] origin) ";

  for (iter = lt1.begin(); iter != lt1.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;

  cout << "[lt2] orign) ";
  for (iter = lt2.begin(); iter != lt2.end(); iter++) {
    cout << *iter << " ";
  }

  cout << endl << endl << "test 6) lt2.merge(lt1);" << endl << endl;
  lt2.merge(lt1);

  cout << "[lt1] merge) ";
  for (iter = lt1.begin(); iter != lt1.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl;

  cout << "[lt2] merge) ";
  for (iter = lt2.begin(); iter != lt2.end(); iter++) {
    cout << *iter << " ";
  }
  cout << endl << endl << endl;
}