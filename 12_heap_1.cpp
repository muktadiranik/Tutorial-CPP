#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int *p = new int();
    *p = 10;
    cout << *p << endl;
    delete(p);
    cout << *p << " " << "after delete" << endl;
    p = new int(4);
    delete[] p;
    p = NULL;
    cout << *p << " " << "after delete dangling pointer" << endl;
}