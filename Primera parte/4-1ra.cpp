#include <iostream>
using namespace std;

int main(){
    int v[5] = {0,2,4,6,8};

    for(int i = 0; i < 5; i++){
        cout << v[i] << " " << &v[i] << endl;
    }

    return 0;
}