#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {0, -9, 1, 3, -4, 5};
    const int N = 1e2;
    bool check[N];
    for(int i = 0; i < N; i++){
        check[i] = false;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            check[arr[i]] = true;
        }
    }
    for(int i = 1; i < N; i++){
        if(check[i] == false){
            cout << i << endl;
            break;
        }
    }
}