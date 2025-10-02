#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* p = &a;

    cout << p << " " << *p << endl;

    cout << "Ingrese un numero: " << endl;
    cin >> *p; 

    cout << p << " " << *p << endl;
    return 0;
}