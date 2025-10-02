#include <iostream>
using namespace std;

void imprimir_matriz(int** matriz, int filas, int columnas){
    for(int i = 0; i < filas; i++){
        cout << endl;
        for(int j = 0; j < columnas; j++){
            cout << matriz[i][j] << " ";
        }
    }
}

int main(){

    int filas;
    cout << "Introduce filas: " << endl;
    cin >> filas;

    int columnas;
    cout << "Introduce columnas: " << endl;
    cin >> columnas;

    int** matriz = new int*[filas];
    
    for(int i = 0; i < filas; i++){
        matriz[i] = new int[columnas];
    }

    for(int i = 0; i < filas; i++){
        cout << "Introduce los elementos en la " << i << "° fila" << endl;
        for(int j = 0; j < columnas; j++){
            cout << "Introduce el numero de la columna: " << endl;
            cin >> matriz[i][j];
        }
    }

    imprimir_matriz(matriz, filas, columnas);

    //Eliminacion de matriz doble
    for(int i = 0; i < filas; i++){
        delete[] matriz[i];
    }
    delete[] matriz;
}