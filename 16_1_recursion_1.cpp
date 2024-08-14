#include<bits/stdc++.h>
using namespace std;
int sum_recursive(int n){
    if(n == 0){
        return 0;
    }
    return n + sum_recursive(n - 1);
}

int power_recursive(int n, int p){
    if(p == 0){
        return 1;
    }
    return n * power_recursive(n, p - 1);
}

int factorial_recursive(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int fibonacci_recursive(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main(){
    cout << fibonacci_recursive(5) << endl;

}