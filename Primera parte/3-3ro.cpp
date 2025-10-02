#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void busqueda_lineal(int* arr, int n, int buscar){
    for(int i = 0; i < n; i++){
        if(arr[i] == buscar){
            cout << "Elemento encontrado: " << buscar << endl;
            break;
        }
    }
}

void busqueda_binaria(int* arr, int n, int buscar){
    int inicio = 0, fin = n - 1;
    bool encontrado = false;

    while(inicio <= fin){
        int medio = inicio + (fin - inicio) / 2;

        if(arr[medio] == buscar){
            cout << "Elemento encontrado: " << buscar << " en la posicion " << medio << endl;
            encontrado = true;
            break;
        }
        else if(arr[medio] < buscar){
            inicio = medio + 1;
        }
        else{
            fin = medio - 1;
        }
    }

    if(!encontrado){
        cout << "Elemento NO encontrado" << endl;
    }
}

void busqueda_binaria_recursiva(int* arr, int n, int buscar){
    if(arr[n-1] != buscar && n >= 0){
        busqueda_binaria_recursiva(arr, n-1, buscar);
    } else {
        cout << "Elemento encontrado: " << buscar << endl;
    }
}

void ordenar(int* arr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
} 

int main(){
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int* Arr = new int[n];
    for(int i = 0; i < n; i++){
        cout << "Introduce el elemento: " << endl;
        cin >> Arr[i];
    }

    int elemento;
    cout << "Introduzca el elemento a buscar: " << endl;
    cin >> elemento;

    auto inicio1 = high_resolution_clock::now();
    busqueda_lineal(Arr, n, elemento);
    auto fin1 = high_resolution_clock::now();
    auto duracion1 = duration_cast<microseconds>(fin1 - inicio1);

    ordenar(Arr, n);

    auto inicio2 = high_resolution_clock::now();
    busqueda_binaria(Arr, n, elemento);
    auto fin2 = high_resolution_clock::now();
    auto duracion2 = duration_cast<microseconds>(fin2 - inicio2);

    auto inicio3 = high_resolution_clock::now();
    busqueda_binaria_recursiva(Arr, n, elemento);
    auto fin3 = high_resolution_clock::now();
    auto duracion3 = duration_cast<microseconds>(fin3 - inicio3);

    cout << "La busqueda lineal dura: " << duracion1.count() << endl;
    cout << "La busqueda binaria dura: " << duracion2.count() << endl;
    cout << "La busqueda binaria dura: " << duracion3.count() << endl;

    delete[] Arr;

    return 0;
}