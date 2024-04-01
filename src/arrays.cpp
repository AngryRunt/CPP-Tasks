#include<iostream>
#include<vector>
using namespace std;
int main(int argc, const char **argv) {
    int ArrayCount = 11;
    int *arrayA = new int[ArrayCount];
    int *arrayB = new int[ArrayCount];
    for(int i = 0; i < ArrayCount; i++) {
        arrayA[i] = i * 10;
        arrayB[i] = i * 10;
    }
    for(int i = 0; i < ArrayCount; i++) {
        cout << arrayA[i] << ", ";
    }
    cout << endl;
    for(int i = 0; i < ArrayCount; i++) {
        cout << arrayB[i] << ", ";  
    }
    cout << endl;
int r = arrayA[1];
cout << r << endl;  
arrayA[ArrayCount-1] = 200;
    for(int i = 0; i < ArrayCount; i++) {
        cout << arrayA[i] << ", ";
    }
cout << endl;
int *arrayC = new int[ArrayCount * 2];
int i = 0;
    for(i; i < ArrayCount; i++){
        arrayC[i] = arrayA[i];
    }
    for(i; i < ArrayCount * 2; i++){
        arrayC[i] = arrayB[i - ArrayCount];
    }
    for (i = 0; i < ArrayCount * 2; i++){
        cout << arrayC[i] << ", ";
    }
    cout << endl;
    int start = ArrayCount - 5, end = ArrayCount + 5;
    vector<int> vecD(10);
    for (i = start; i < end; i++){
        vecD[i - start] = arrayC[i];
    }
       vecD.push_back(15);
    for (i = 0; i < vecD.size(); i++){
        cout << vecD[i] << ", ";
    }
    cout << endl;    
delete[] arrayA;
delete[] arrayB;
delete[] arrayC;
arrayA = NULL;
arrayB = NULL;    
arrayC = NULL;   
return 0;
}