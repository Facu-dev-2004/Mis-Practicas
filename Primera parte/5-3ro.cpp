#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int* dato = &x;

    //Trata a este bloque de memoria igual pero sin cambiar los bits.
    float* dato2 = reinterpret_cast<float*> (&x);

    cout << *dato2; //Imprime el numero en binario
}