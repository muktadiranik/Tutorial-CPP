#include<bits/stdc++.h>
using namespace std;
void prime_seive(int n){
    int prime[100] = {0};
    
    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            for(int j = i * i; j <= n; j = j + i){
                prime[j] = 1;
            }
        }
    }

    for(int i = 2; i < n; i++){
        if(prime[i] == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

bool check_prime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void get_prime(int n){
    for(int i = 2; i <= n; i++){
        if(check_prime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    prime_seive(50);
    get_prime(50);
}