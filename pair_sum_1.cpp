#include<bits/stdc++.h>
using namespace std;
bool pair_sum(int arr[], int n, int k){
    for(int i = 0; i < n - 1; i++){
        for(int j = i; j < n; j++){
            if(arr[i] + arr[j] == k){
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
}

bool pair_sum_efficient(int arr[], int n, int k){
    int i = 0;
    int j = n - 1;
    while(i < j){
        if(arr[i] + arr[j] == k){
            cout << i << " " << j << endl;
            return true;
        }
        if(arr[i] + arr[j] > k){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}

int main(){
    int n = 6;
    int arr[n] = {1, 2, 3, 4, 5, 6};
    int k = 6;
    cout << pair_sum(arr, n, k);
    cout << endl;
    cout << pair_sum_efficient(arr, n, k);
}