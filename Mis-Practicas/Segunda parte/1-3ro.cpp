#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ofstream archivo("dato.txt");

    if(!archivo){
      cout << "No se puede abrir el archivo" << endl;
      return 1;
    }

    int n;
    cout << "Introduce un tamaño para el arreglo: " << endl;
    cin >> n;

    archivo << n << endl;

    int* arr = new int[n];
    for(int i = 0; i < n; i++){
      arr[i] = i;

      //Escribe los numeros dentro del archivo txt
      archivo << arr[i] << endl;
    }

    delete[] arr;
    archivo.close();


    return 0;
}
