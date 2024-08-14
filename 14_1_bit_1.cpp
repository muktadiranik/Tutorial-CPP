#include<bits/stdc++.h>
using namespace std;
int get_bit(int n, int p){
    return ((n & (1 << p)) != 0);
}

int set_bit(int n, int p){
    return (n | (1 << p));
}

int clear_bit(int n, int p){
    int mask = ~(1 << p);
    return (n & mask);
}

int update_bit(int n, int p, int value){
    int mask = ~(1 << p);
    n = n & mask;
    return (n | (value << p));
}

int main(){
    cout << get_bit(5, 2) << endl;
    cout << set_bit(5, 1) << endl;
    cout << clear_bit(5, 2) << endl;
    cout << update_bit(5, 1, 1) << endl;
}