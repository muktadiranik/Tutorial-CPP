#include<bits/stdc++.h>
using namespace std;

int array_1(int arr[], int n){
    int max_till_i = -88888888;
    for(int i = 0; i < n; i++){
        max_till_i = max(max_till_i, arr[i]);
        cout << max_till_i << " ";
    }
    return 0;
}

int sub_array_sum(int arr[], int n){
    for (int i = 0; i < n; i++){
        int current_sum = 0;
        for(int j = i; j < n; j++){
            current_sum = current_sum + arr[j];
            cout << current_sum << " ";
        }
        
    }
    return 0;
}

int longest_arithmetic_sub_array(int arr[], int n){
    int prev_diff = arr[1] - arr[0];
    int curr = 2;
    int ans = 2;
    for(int i = 2; i < n; i++){
        if(prev_diff == arr[i] - arr[i - 1]){
            curr++;
        }
        else{
            prev_diff = arr[i] - arr[i - 1];
            curr = 2;
        }
        ans = max(ans, curr);
    }
    return ans;
}

int record_breaker(){
    int n = 6;
    int arr[n] = {0, 2, 0, 4, 6, 8};
    arr[n] = -1;
    int max_arr = -1;
    int ans = 0;
    if(n == 1){
        cout << n;
        return 0;
    }
    for(int i = 0; i < n; i++){
        if (arr[i] > max_arr && arr[i] > arr[i + 1]){
            ans++;
        }
        max_arr = max(max_arr, arr[i]);
    }
    cout << ans;
    return 0;
}

int main(){
    int n = 6;
    int arr[n] = {-2, 2, 8, 16, 88, 102};
    array_1(arr, n);
    cout << endl;
    int m = 5;
    int arr_2[m] = {1, 2, 0, 7, 2};
    sub_array_sum(arr_2, m);
    cout << endl;
    int arr_3[n] = {2, 4, 6, 88, 102, 104};
    cout << longest_arithmetic_sub_array(arr_3, n);
    cout << endl;
    int arr_4[n] = {0, 2, 6, 2, 0, 8};
    record_breaker();
}