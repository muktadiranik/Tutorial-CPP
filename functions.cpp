#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

bool isPrime(int n){
    for (int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int fibonacci(int n){
    int a = 0;
    int b = 1;
    int fib = 0;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++){
        fib = a + b;
        cout << fib << " ";
        a = b;
        b = fib;
    }
    return 0;
}

int factorial_recursion(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial_recursion(n - 1);
}

int sum(int n){
    return (n * (n + 1)) / 2;
}



int main(){
    cout << factorial(5);
    cout << endl;
    cout << isPrime(5);
    cout << endl;
    int a, b;
    a = 0;
    b = 1;
    int fib = 0;
    cout << a << " " << b << " ";
    for(int i = 0; i <= 10; i++){
        fib = a + b;
        cout << fib << " ";
        a = b;
        b = fib; 
    }
    cout << endl;

    fibonacci(5);
    cout << endl;
    cout << factorial_recursion(5);
}