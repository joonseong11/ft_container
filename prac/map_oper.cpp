#include <iostream>
#include <map>
using namespace std;

int main(void) {
  map<int, int> m;

  m[9] = 109;
  m[3] = 103;
  m[13] = 113;
  m[15] = 115;
  m[1] = 101;
  m[7] = 107;
  m[5] = 105;
  m[11] = 111;

  map<int, int>::iterator iter;

  for (iter = m.begin(); iter != m.end(); iter++) {
    cout << "[" << iter->first << ", " << iter->second << "]"
         << " ";
  }
  cout << endl;

  m[11] = 999;
  m[1] = 999;


    for(iter = m.begin(); iter != m.end() ; iter++){
        cout << "[" << iter->first << ", " << iter->second << "]" << " ";
    }    
    cout << endl;
    
    //사이즈 출력 
    cout << "size : " << m.size() << endl;
}