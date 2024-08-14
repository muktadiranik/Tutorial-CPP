#include<bits/stdc++.h>
using namespace std;
int bubble_sort(int arr[], int n){
    int counter = 0;
    while(counter < n - 1){
        for(int i = 0; i < n - counter - 1; i++){
            if(arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter = counter + 1;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


int main(){
    int n = 6;
    int arr[n] = {8, 14, 16, 2, 18, 4};
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr_2[n] = {2, 88, 102, 6, 8, 16};
    bubble_sort(arr_2, n);
}