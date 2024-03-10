#include<iostream>
using namespace std;
int main(int argc, const char **argv) {
    cout << "номер столба: ";
    int n = -1;
    cin >> n;
    cout << endl;
    cout << "расстояние между столбами: ";
    float y = -1;
    cin >> y;
    cout << endl;
    cout << "до ближайшего столба: ";
    float x = -1;
    cin >> x;
    cout << endl;
     if ((n < 0) ||
     (y < 0) ||
     (x < 0)) {
        cout << "введены невалидные данные" << endl;
        return 0;
    }   
float l = x + y * (n - 1);
cout << "расстояние до "
    << n << "-го столба: "
    << l << " м." << endl;
    return 0;
}