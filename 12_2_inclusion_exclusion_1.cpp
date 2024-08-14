#include<bits/stdc++.h>
using namespace std;
int divisible(int n, int a, int b){
    int c_1 = n / a;
    int c_2 = n / b;
    int c_3 = n / (a * b);

    return c_1 + c_2 - c_3;
}

int GCD(int a, int b){
    while(b != 0){
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(){
    cout << divisible(100, 10, 15) << endl;
    cout << GCD(42, 24) << endl;
}