#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 10;
    // ternary operator
    bool x = (i % 2) ? true : false;
    cout << x << endl;

    // unary operator
    int j = -i;
    cout << i << " " << j << endl;

    cout << i++ << endl;
    cout << i << endl;
    cout << ++i << endl;

    cout << i-- << endl;
    cout << i << endl;
    cout << --i << endl;

    // bitwise operator
    int a = 32;
    int b = 12;
    int c;

    c = a & b;
    cout << c << endl;

    c = a | b;
    cout << c << endl;

    c = a ^ b;
    cout << c << endl;

    c = a >> 2;
    cout << c << endl;

    c = a << 4;
    cout << c << endl;

    // special operator
    cout << sizeof(c) << endl;

    int num_1, num_2, sum;
    sum = (num_1 = 10, num_2 = 20, sum = num_1 + num_2);
    cout << sum << endl;

    // >, <, >=, <=, ==, !=
}