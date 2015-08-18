#include <iostream>
#include <string>
#include <exception>
#include "file_size.h"

using namespace std;

int main() {

    try {
        cout<<"File size for \"test\" is: "<<file_size("test")<<" bytes."<<endl;
    } catch(const exception& e) {
        cerr<<e.what()<<endl;
    }

    return 0;
}
