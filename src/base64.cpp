#include <iostream>
#include <string>
#include "base64.hpp"

void test_base64_hpp()
{
    using namespace std;
    string s = "This is a sample string";
    cout << "Before encoding: " << s << endl;
    string encoded = encode64(s);
    cout << "Encoded using encode64 function: " << encoded << endl;
    string decoded = decode64(encoded);
    cout << "Decoded using decode64 function: " << decoded << endl;
}
