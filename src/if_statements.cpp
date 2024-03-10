#include<iostream>
using namespace std;
int main(int argc, const char **argv) {
    cout << "x = ";
    int x;
    cin >> x;
    cout << endl;
if (x > 0) cout << "y = 1" << endl;
else if (x == 0) cout << "y = 0" << endl;
else cout << "y = -1" << endl;
    return 0;
}