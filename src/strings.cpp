#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;
int main(int argc, const char **argv) {
    string str = "we will definitely learn how to program";
    cout << str << endl;
     cout << str[2] << endl;
     cout << str[str.size() - 2] << endl;
     cout << str.substr(0, 5) << endl;
     cout << str.substr(0, str.size()-2) << endl;
string strnew;
for (int i = 0; i < str.size(); i+=2){
    strnew.push_back(str[i]);
}
cout << strnew << endl;
strnew.clear();
for (int i = 1; i < str.size(); i+=2){
    strnew.push_back(str[i]);
}
cout << strnew << endl;
strnew.clear();
cout << str.substr(str.size()-2) + str.substr(0,2) << endl;
for (int i = 3; i < str.size(); i+=3){
    strnew.push_back(str[i]);
}
cout << strnew << endl;
strnew.clear();
cout << str.substr(0, str.size()-1) << endl;
string copystr(str);
reverse(copystr.begin(), copystr.end());
for (int i = 0; i < copystr.size(); i+=2){
    strnew.push_back(copystr[i]);
}
cout << strnew << endl;
strnew.clear();
cout << str.substr(0, 8) + str.substr(19) << endl;
cout << str.substr(0, 8) + "never " + str.substr(19) << endl;
cout << str.substr(0, 8) + "never " + str.substr(19) << " on C++" << endl;
return 0;
}
