#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama1 = "DwiAnanda";
    string potong = nama1.substr(0, 4);
    cout << "Substring (0,4): " << potong << endl;
    return 0;
}