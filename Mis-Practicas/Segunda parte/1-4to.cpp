#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
  ifstream is ("dato.txt", ifstream::binary);
  if (is) {
    // get length of file:
    is.seekg (0, is.end);
    int length = is.tellg();
    is.seekg (0, is.beg);

    char* buffer = new char [length];

    cout << "Reading " << length << " characters... " << endl;
    // read data as a block:
    is.read (buffer,length);

    if (is)
      cout << "all characters read successfully." << endl;
    else
      cout << "error: only " << is.gcount() << " could be read" << endl;
    is.close();

    // ...buffer contains the entire file...

    for(int i = 0; i < length; i++){
      cout << buffer[i];
    }

     delete[] buffer;
  }
  return 0;
}
