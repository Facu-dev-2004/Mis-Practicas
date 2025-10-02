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

int promedio(int* arr, int n){
    double total;
    double promedio;

    if(n == 0){
        return 0;
    } else {
        total = suma(arr, n);
        promedio = total/n;
    }
    return promedio;
}

int main(){
    int cant;
    cout << "Introduce el espacio del arreglo" << endl;
    cin >> cant;

    int* Parr = new int[cant];

    for(int j = 0; j < cant; j++){
        cin >> Parr[j];
    }

    cout << "La suma del arreglo es: " << suma(Parr, cant) << endl;
    cout << "El promedio del arreglo es: " << promedio(Parr, cant) << endl;

    delete[] Parr;
    return 0;
}