#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n){
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        curr_sum = curr_sum + arr[i];
        if(curr_sum < 0){
            curr_sum = 0;
        }
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int circular_max_sub_array_sum(int arr[], int n){
    int wrap_sum = 0, non_wrap_sum = 0;
    non_wrap_sum = kadane(arr, n);
    int total_sum = 0;
    for(int i = 0; i < n; i++){
        total_sum += arr[i];
        arr[i] = -arr[i];
    }
    wrap_sum = total_sum + kadane(arr, n);
    return max(wrap_sum, non_wrap_sum);
}

int main(){
    int n = 7;
    int arr[n] = {4, -4, 6, -6, 10, -11, 12};
    cout << circular_max_sub_array_sum(arr, n);
}