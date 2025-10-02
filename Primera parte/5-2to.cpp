#include <iostream>
using namespace std;

void copiar_arreglo(int* arr, int* arr2, int n){
    int copia = 0;

    for(int i = 0; i < n; i++){
        copia = arr[i];
        arr2[i] = copia;
    }
}

void imprimir_listas(int* arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}

int main() {

    int n;
    cout << "Ingrese el tamaño: " << endl;
    cin >> n;

    int* Arr = new int[n];

    for(int i = 0; i < n; i++){
        cout << "Ingrese el numero a la lista: " << endl;
        cin >> Arr[i];
    }

    int* Arr2 = new int[n];

    copiar_arreglo(Arr, Arr2, n);
    imprimir_listas(Arr, n);
    imprimir_listas(Arr2, n);

    delete[] Arr;
    delete[] Arr2;
    return 0;
}
