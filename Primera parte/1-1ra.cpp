#include <iostream>
using namespace std;

int main(){

    int a = 12;
    int* p = &a;

    float b = 12.3f;
    float* f = &b;

    char ch = 'a';
    char* c = &ch;

    cout << *p  << " " << p << endl << *f << " " << f << endl << *c << " " << static_cast<void*>(c) << endl;

    return 0;
}