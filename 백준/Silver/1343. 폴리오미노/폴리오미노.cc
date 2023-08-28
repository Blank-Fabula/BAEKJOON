#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    string str; cin >> str;
    for (int pos = 0; (pos = str.find("XXXX", pos)) >= 0; ) { str.replace(pos, 4, "AAAA"); }
    for (int pos = 0; (pos = str.find("XX", pos)) >= 0; ) { str.replace(pos, 2, "BB"); }
    if (str.find("X", 0) == string::npos) { cout << str;
    } else { cout << -1; }
return 0; }