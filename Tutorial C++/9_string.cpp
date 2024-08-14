#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "this is a string";
    cout << sizeof(str) << endl;
    cout << str.size() << endl;
    cout << str.empty() << endl;

    string dog_str = "dog";
    string cat_str = "cat";

    cout << dog_str.compare(cat_str) << endl;
    cout << cat_str.compare(cat_str) << endl;
    cout << cat_str.compare(dog_str) << endl;

    cout << str << endl;
    string another_str = str.assign(str, 0, 10);
    cout << another_str << endl;

    int index;
    index = str.find("a", 0);
    cout << index << endl;

    another_str.insert(9, " string");
    cout << another_str << endl;

    another_str.erase(8, 15);
    cout << another_str << endl;

    str.replace(7, 8, " another string");
    cout << str << endl;

    return 0;
}