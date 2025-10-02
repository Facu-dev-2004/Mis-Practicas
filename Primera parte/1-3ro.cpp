#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ordenar(int* arr, int n){
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}  

void imprimir_lista(int* arr, int n){
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
}

int main(){
    int n;
    cout << "Ingrese el tamaño del arreglo: " << endl;
    cin >> n;

    int* Arr = new int[n];

    for(int i = 0; i < n; i++){
        cout << "Ingrese el elemento del arreglo: " << endl;
        cin >> Arr[i];
    }

    imprimir_lista(Arr, n);
    cout << endl;
    ordenar(Arr, n);
    imprimir_lista(Arr, n);

    return 0;
}