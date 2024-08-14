#include<bits/stdc++.h>
using namespace std;
int max_sub_array_sum(){
    int n = 4;
    int arr[n] = {-1, 4, 7, 2};
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sub_arr_sum = 0;
            for(int k = i; k <= j; k++){
                sub_arr_sum += arr[k];
            }
            max_sum = max(max_sum, sub_arr_sum);
        }
    }
    cout << max_sum << endl;
    return 0;
}

int cumulative_max_sub_array_sum(int arr[], int n){
    int cum_sum[n + 1];
    cum_sum[0] = 0;
    for(int i = 1; i <= n; i++){
        cum_sum[i] = cum_sum[i - 1] + arr[i - 1];
    }
    int max_sum = INT_MIN;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < i; j++){
            sum = cum_sum[i] - cum_sum[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int kadane_algorithm(int arr[], int n){
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (int i= 0; i < n; i++){
        curr_sum = curr_sum + arr[i];
        if(curr_sum < 0){
            curr_sum = 0;
        }
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int main(){
    max_sub_array_sum();
    int arr[5] = {1, -4, 3, 2, 1};
    cout << cumulative_max_sub_array_sum(arr, 5);
    cout << endl;
    cout << kadane_algorithm(arr, 5);
}