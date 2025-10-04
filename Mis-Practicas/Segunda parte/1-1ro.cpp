#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Introduce un numero: " << endl;
    cin >> n;

    int* arr;
    arr = new int[n];

    cout << &arr << endl;
    delete[] arr;
}
