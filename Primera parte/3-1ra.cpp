#include <Iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 7;

    int* X = &x;
    int* Y = &y;

    cout << X << " " << *X << endl;
    cout << Y << " " << *Y << endl;

    int tmp = *X;
    *X = *Y;
    *Y = tmp;

    cout << X << " " << *X << endl;
    cout << Y << " " << *Y << endl;
    return 0;
}