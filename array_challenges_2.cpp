#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {0, 2, 0, 4, 6, 2};
    arr[n] = -1;
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    if(n == 1){
        cout << n << endl;
        return 0;
    }
    int max_arr = -1;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > max_arr && arr[i] > arr[i + 1]){
            ans++;
        }
        max_arr = max(max_arr, arr[i]);
    }
    cout << ans << endl;
    return 0;
}