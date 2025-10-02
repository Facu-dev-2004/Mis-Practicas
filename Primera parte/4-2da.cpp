#include <iostream>
using namespace std;

int maximo(int* arr, int n){
    int maximo = arr[0];
    for(int i = 0; i < n; i++){
        if(maximo < arr[i]){
            maximo = arr[i];
        }
    }
    return maximo;
}


int main(){
    int cant;
    cout << "Introduce el espacio del arreglo" << endl;
    cin >> cant;

    int* Parr = new int[cant];

    for(int j = 0; j < cant; j++){
        cin >> Parr[j];
    }

    cout << maximo(Parr, cant);

    delete[] Parr;
    return 0;
}