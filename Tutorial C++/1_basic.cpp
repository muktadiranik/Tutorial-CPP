#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;

    // data types
    const double PI = 3.141592653589793238;
    char ch = 'c';
    string str = "string";
    bool b = false;
    int i = 5;
    float f = 3.647;
    double d = 21.47483647;

    cout << PI << ch << str << b << i << f << d << endl;
    cout << sizeof(str) << endl;
    cout << INT_MAX << INT_MIN << endl;

    cout << i++ << endl;
    cout << i << endl;
    cout << ++i << endl;

    // type casting
    cout << 4 / 5 << endl;
    cout << (float)4 / 5 << endl;

    // escape sequence
    cout << "new\nline\n";

    // format output
    cout << showpoint;
    cout << (float)22 / 2 << endl;

    cout << noshowpoint;
    cout << (float)22 / 2 << endl;

    cout << fixed;
    cout << setprecision(5);
    cout << (float)10 / 3 << endl;

    cout << setw(10) << (float)10 / 3 << endl;

    return 0;
}