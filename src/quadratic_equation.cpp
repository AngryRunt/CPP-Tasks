#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char **argv) {
    float a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c =  ";
    cin >> c;
    if (a == 0) {
        float x = -c / b;
        cout << "x =  " << x << endl;
        return 0;
    }
    float d = pow(b, 2) - 4 * a * c;
    if (d < 0) {
        cout << "корней нет" << endl;
    }
    else {
        float x1 = (-b + sqrt(d)) / (2 * a);
        cout << "x1 =  " << x1;
        if (d > 0){
            float x2 = (-b - sqrt(d)) / (2 * a);
            cout << "x2 =  " << x2;
        }
    cout << endl;
    }
return 0;
}    
