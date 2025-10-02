#include <iostream>
using namespace std;

int suma(int* arr, int n){
    //Se suma el arreglo de punteros
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += arr[i];
    }
    return suma;
}

int main(){
    int cant = 5;
    int* Parr = new int[cant];

    for(int j = 0; j < cant; j++){
        cin >> Parr[j];
    }

    cout << suma(Parr, cant) << endl;

    delete[] Parr;
    return 0;
}