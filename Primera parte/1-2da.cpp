#include <iostream>
using namespace std;

void swap_por_puntero(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;

    cout << a << " " << *a << endl;
    cout << a << " " << *a << endl;
}

int main(){
    int x = 6;
    int y = 9;

    int* X = &x;
    int* Y = &y;

    cout << X << " " << *X << endl;
    cout << Y << " " << *Y << endl;

    swap_por_puntero(X, Y);
    return 0;
}