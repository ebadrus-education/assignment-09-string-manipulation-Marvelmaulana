#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama1 = "DwiAnanda";
    nama1.erase(3, 2);
    cout << "Setelah erase(3,2): " << nama1 << endl;
    return 0;
}