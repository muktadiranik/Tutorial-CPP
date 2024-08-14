#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 4;
    int arr[n] = {1, 3, 4, 7};
    int i, j, k;
    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            for(k = i; k <= j; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}