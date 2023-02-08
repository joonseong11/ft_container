#include <iostream>
#include <string>

using namespace std;


class Friend1 {
private :
    string name;
    void set_name(Friend1&, string);
public:
	hello();
};
 
void Friend1::set_name(Friend1& f, string s) {
    f.name = s;
    cout << f.name << "\n";
}
 
int main(void) {
    Friend1 f1;
 
    set_name(f1, "열코");
 
    return 0;
}
