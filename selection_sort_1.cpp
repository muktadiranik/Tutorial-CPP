#include<bits/stdc++.h>
using namespace std;
int selection_sort(int arr[], int n){

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

int main(){
    int n = 4;
    int arr[n] = {8, 2, 6, 4};

    selection_sort(arr, 4);

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << endl << size;
}