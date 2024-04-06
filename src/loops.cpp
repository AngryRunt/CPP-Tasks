#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, const char **argv) {
//task12 
  cout << "n = ";
    int n;
    cin >> n;
    cout << endl;
    for (int i = 0; i <= n; i++) {
     cout << i << " ";   
    }
    cout << endl;
//task13
    cout << "n = ";
    cin >> n;
    cout << endl;
    for (int i = 0; i <= n; i+=5) {
     cout << i << " ";   
    }
    cout << endl;    
//task14
  cout << "n = ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++) {
     cout << "1" << " ";   
    }
    cout << endl;
//task15
    cout << "n = ";
    cin >> n;
    cout << endl;
    int x = 1;
    for (int i = 0; i < n; i++) {  
     cout << x << " ";
     x = x * (-1);   
    }
 cout << endl;
//task16
  cout << "n = ";
    cin >> n;
    cout << endl;
    x = 0;
    for (int i = 1; i <= n; i++) {  
        bool isnull = x % 2 == 0; 
        x = abs(x) +1;
        x = isnull ? x: x * (-1);
     cout << x << " ";    
    }
  cout << endl;
//task17
    for (int i = 1; i <= n; i++) {  
      if (i % 2 == 0){
        cout << i * (-1) << " ";
        }
      else cout << i << " ";
        }
  cout << endl;
//task18
for (int i = 2; i <= n; i+=2){
  cout << i << " ";
}
cout << endl;
//task19
x = 2;
for (int i = 0; i < n; i++){
cout << x << " ";
x = pow(x, 2);
}
cout << endl;
//task20
for (int i = 0; i < n; i++){
  for (int j = 0; j < 4; j++){
  cout << j << " ";
  }
cout << endl;
}
//task21
for (int i = 1; i <= n; i+=2){
  cout << i << "! ";
}
cout << endl;
//task22
int sum = 0;
for (int i = 0; i < 91; i+=2){
  sum+=i;
  }
cout << sum << endl;  
//task23
for (int i = 0; i <= 9; i++){
  x = i * 9;
  cout << i << " * 9 = " << x << endl;
  }
//task24
int a = 0;
  cout << "a = ";
    cin >> a;
sum = 0;
for (int i = a; i <= 100; i++){
  sum+=i;
}
cout << sum << endl;
//task26
int g = 0;
  cout << "кол-во гостей: ";
  cin >> g;
int kuski = 0;
while (kuski < g){
  kuski = kuski + 2;
}
cout << kuski / 2 << endl;
//task27
g = 0;
  cout << "кол-во гостей: ";
  cin >> g;
kuski = 0;
while (kuski < (g + g / 2 + 1)){
  kuski = kuski + 2;
}  
cout << kuski / 2 << endl;
//task28
g = 0;
  cout << "кол-во гостей: ";
  cin >> g;
kuski = 0;
while (kuski < (g + g / 2 + 1)){
  kuski = kuski + 2;
}  
cout << kuski / 2 << endl;

cout << endl;
return 0;
}