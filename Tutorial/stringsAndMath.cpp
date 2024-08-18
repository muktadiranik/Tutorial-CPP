#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <algorithm>
#include <typeinfo>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    // char
    char characterString[] = {'h', 'e', 'l', 'l', 'o', '!', '\0'};

    cout << characterString << endl;
    cout << "size of characterString: " << sizeof(characterString) << endl;

    // string
    string stringString = "hello!";
    cout << stringString << endl;
    cout << "size of stringString: " << sizeof(stringString) << endl;
    cout << "stringString.length(): " << stringString.length() << endl;

    // reverse string
    for (int i = stringString.length() - 1; i >= 0; i--)
    {
        cout << stringString[i];
    }
    cout << endl;

    // reverse function
    reverse(stringString.begin(), stringString.end());
    cout << stringString << endl;

    // transform function
    transform(stringString.begin(), stringString.end(), stringString.begin(), ::toupper);
    cout << stringString << endl;

    transform(stringString.begin(), stringString.end(), stringString.begin(), ::tolower);
    cout << stringString << endl;

    // ascii
    for (int i = 0; i < stringString.length(); i++)
    {
        cout << (int)stringString[i] << " ";
    }
    cout << endl;

    string stringNumber = to_string(123);

    // data type of a variable
    cout << "stringNumber: " << stringNumber << endl;
    cout << "typeid(stringNumber).name(): " << typeid(stringNumber).name() << endl;

    cout << "typeid(characterString).name(): " << typeid(characterString).name() << endl;
    cout << "typeid(stringString).name(): " << typeid(stringString).name() << endl;

    if (stringString.find("hello") != string::npos)
    {
        cout << "stringString.find(\"hello\"): " << stringString.find("hello") << endl;
    }

    string stringString2(stringString);
    cout << "stringString2: " << stringString2 << endl;
    cout << "stringString2.find(\"hello\"): " << stringString2.find("hello") << endl;

    string stringString3(stringString, 4);
    cout << "stringString3: " << stringString3 << endl;

    string stringString4(5, 'x');
    cout << "stringString4: " << stringString4 << endl;

    string stringString5;
    stringString5 = stringString.append(stringString2).append(stringString3).append(stringString4);
    cout << "stringString5: " << stringString5 << endl;

    string stringString6;
    stringString6 = stringString.append(stringString2, 0, 5).append(stringString3, 0, 5).append(stringString4, 0, 5);
    cout << "stringString6.substr(5, 5): " << stringString6.substr(5, 5) << endl;
    cout << "stringString6: " << stringString6 << endl;
    stringString6.erase(0, 5);
    cout << "stringString6: " << stringString6 << endl;
    stringString6.erase(5, stringString6.length());
    cout << "stringString6: " << stringString6 << endl;

    // vector
    vector<string> vectorString;
    vectorString.push_back("hello");
    vectorString.push_back("world");
    cout << vectorString[0] << " " << vectorString[1] << endl;
    cout << "size of vectorString: " << sizeof(vectorString) << endl;
    cout << "vectorString.at(0): " << vectorString.at(0) << endl;
    cout << "vectorString.front(): " << vectorString.front() << endl;
    cout << "vectorString.back(): " << vectorString.back() << endl;

    // all vector operations
    vectorString.push_back("!");
    cout << "vectorString.size(): " << vectorString.size() << endl;
    cout << "vectorString.capacity(): " << vectorString.capacity() << endl;
    cout << "vectorString.max_size(): " << vectorString.max_size() << endl;
    cout << "vectorString.empty(): " << vectorString.empty() << endl;
    cout << "vectorString.at(0): " << vectorString.at(0) << endl;
    cout << "vectorString.front(): " << vectorString.front() << endl;
    cout << "vectorString.back(): " << vectorString.back() << endl;

    vectorString.pop_back();
    cout << "vectorString.at(0): " << vectorString.at(0) << endl;
    cout << "vectorString.front(): " << vectorString.front() << endl;
    cout << "vectorString.back(): " << vectorString.back() << endl;

    vectorString.clear();
    cout << "vectorString.size(): " << vectorString.size() << endl;
    cout << "vectorString.capacity(): " << vectorString.capacity() << endl;
    cout << "vectorString.max_size(): " << vectorString.max_size() << endl;
    cout << "vectorString.empty(): " << vectorString.empty() << endl;

    vectorString.push_back("hello");
    vectorString.push_back("world");
    cout << "vectorString.size(): " << vectorString.size() << endl;
    cout << "vectorString.capacity(): " << vectorString.capacity() << endl;
    cout << "vectorString.max_size(): " << vectorString.max_size() << endl;
    cout << "vectorString.empty(): " << vectorString.empty() << endl;

    for (auto i : vectorString)
    {
        cout << i << " ";
    }
    cout << endl;

    // convert character to ascii code and vice versa
    cout << "int('a'): " << int('a') << endl;
    cout << "char(97): " << char(97) << endl;

    // convert string to ascii code and vice versa
    string stringString7 = "hello";

    cout << "stringString7: " << stringString7 << endl;

    vector<int> string7IntegerVector;
    string stringString8 = "";

    for (int i = 0; i < stringString7.length(); i++)
    {
        string7IntegerVector.push_back(int(stringString7[i]));
        cout << (int)stringString7[i];
    }

    cout << endl;

    for (auto i : string7IntegerVector)
    {
        stringString8 += char(i);
    }

    cout << "stringString8: " << stringString8 << endl;

    string stringString10 = "hello";
    string stringString11;
    string stringString12;

    cout << "stringString10: " << stringString10 << endl;

    for (char c : stringString10)
    {
        stringString11 += to_string(int(c - 23));
    }

    for (int i = 0; i < stringString11.length(); i += 2)
    {
        string temporaryString = "";
        temporaryString += stringString11[i];
        temporaryString += stringString11[i + 1];

        int temporaryIntegerCode = stoi(temporaryString);
        char temporaryCharacterCode = temporaryIntegerCode + 23;
        stringString12 += temporaryCharacterCode;
    }

    cout << "stringString11: " << stringString11 << endl;
    cout << "stringString12: " << stringString12 << endl;

    // math functions

    cout << "abs(-5): " << abs(-5) << endl;
    cout << "sqrt(25): " << sqrt(25) << endl;
    cout << "cbrt(27): " << cbrt(27) << endl;
    cout << "ceil(2.5): " << ceil(2.5) << endl;
    cout << "floor(2.5): " << floor(2.5) << endl;

    cout << "exp(2): " << exp(2) << endl;
    cout << "log(2): " << log(2) << endl;
    cout << "log10(2): " << log10(2) << endl;

    cout << "pow(2, 3): " << pow(2, 3) << endl;
    cout << "sin(0): " << sin(0) << endl;
    cout << "cos(0): " << cos(0) << endl;
    cout << "tan(0): " << tan(0) << endl;

    cout << "sqrt(25): " << sqrt(25) << endl;
    cout << "cbrt(27): " << cbrt(27) << endl;
    cout << "ceil(2.5): " << ceil(2.5) << endl;
    cout << "floor(2.5): " << floor(2.5) << endl;

    cout << "exp(2): " << exp(2) << endl;
    cout << "log(2): " << log(2) << endl;
    cout << "log10(2): " << log10(2) << endl;

    cout << "pow(2, 3): " << pow(2, 3) << endl;
    cout << "sin(0): " << sin(0) << endl;
    cout << "cos(0): " << cos(0) << endl;
    cout << "tan(0): " << tan(0) << endl;

    return 0;
}