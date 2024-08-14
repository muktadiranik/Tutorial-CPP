#include<iostream>
using namespace std;
int main(){
    int i;
    cout << "i: ";
    cin >> i;

    switch (i)
    {
    case 1:
        cout << 1;
        break;

    case 10:
        cout << 10;
        break;

    default:
        cout << i;
        break;
    }

}