#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void invertir_lista(int* arr, int n){
    for(int i = 0; i < n/2; i++){
            swap(&arr[i], &arr[n-i-1]);
    }
}

void imprimir_lista(int* arr, int n){
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
}

int main(){

    int n;
    cout << "Introduce el tamaño: ";
    cin >> n;

    int* Arr = new int[n];
    for(int i = 0; i < n; i++){
        cout << "Introduce los elementos: " << endl;
        cin >> Arr[i];
    }

    imprimir_lista(Arr, n);
    cout << endl;
    invertir_lista(Arr, n);
    imprimir_lista(Arr, n);

    delete[] Arr;
    return 0;
}