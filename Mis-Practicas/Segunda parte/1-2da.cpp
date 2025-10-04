#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Introduce un numero: " << endl;
    cin >> n;

    double* arr;
    arr = new double[n];

    for(int i = 0; i < n; i++){
        arr[i] = i*0.5;
    }

    for(int i = 0; i < n; i++){
      cout << arr[i] << endl;
    }

    cout << &arr << endl;
    delete[] arr;

    return 0;
}
