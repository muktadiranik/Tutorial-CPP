#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 42;
    int arr[n + 1] = {0};
    for (int i = 2; i <= n; i++){
        arr[i] = i;
    }

    for(int i = 2; i <= n; i++){
        if(arr[i] == i){
            for(int j = i * i; j <= n; j = j + i){
                if(arr[j] == j){
                    arr[j] = i;
                }
            }
        }
    }

    while(n != 1){
        cout << arr[n] << " ";
        n = n / 2;
    }
}