#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;

int g_irandomNumber = 0;
const double PI = 3.14;

int main(int argc, char **argv)
{
    cout << "Hello World!" << endl;

    if (argc != 1)
    {
        cout << "Hello " << argv[1] << "!" << endl;
    }

    for (int i = 0; i < argc; i++)
    {
        cout << "Arg " << i << ": " << argv[i] << endl;
    }

    // variables
    int i = 0;
    short s = 0;
    long l = 0;
    long long ll = 0;
    float f = 0;
    double d = 0;
    long double ld = 0;
    char c = 0;
    bool b = false;
    string str = "";
    auto a = 0;

    // printing variables
    cout << "i: " << i << endl;
    cout << "s: " << s << endl;
    cout << "l: " << l << endl;
    cout << "ll: " << ll << endl;
    cout << "f: " << f << endl;
    cout << "d: " << d << endl;
    cout << "ld: " << ld << endl;
    cout << "c: " << c << endl;
    cout << "b: " << b << endl;
    cout << "str: " << str << endl;
    cout << "a: " << a << endl;

    // user input
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "x + y = " << x + y << endl;
    cin.ignore();

    // string input
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "str: " << str << endl;

    // parsing from string to other types
    string str2 = "123";
    int i2 = 0;
    i2 = stoi(str2);
    cout << "i2: " << i2 << endl;
    cout << "i2 to double: " << double(i2) << endl;

    string str3 = "123.456";
    float f2 = 0;
    f2 = stof(str3);
    cout << "f2: " << f2 << endl;
    cout << "f2 to int: " << int(f2) << endl;
    cout << "f2 to double: " << double(f2) << endl;

    string str4 = "123.456";
    double d2 = 0;
    d2 = stod(str4);
    cout << "d2: " << d2 << endl;
    cout << "d2 to int: " << int(d2) << endl;
    cout << "d2 to float: " << float(d2) << endl;

    string str5 = "123.456";
    long double ld2 = 0;
    ld2 = stold(str5);
    cout << "ld2: " << ld2 << endl;
    cout << "ld2 to int: " << int(ld2) << endl;
    cout << "ld2 to float: " << float(ld2) << endl;

    // ternary operator
    string str6 = "true";
    b = (str6 == "true") ? true : false;
    cout << "b: " << b << endl;

    return 0;
}