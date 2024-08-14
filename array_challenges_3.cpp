#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {2, 2, 2, 4, 6, 8};
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    const int N = 1e2;
    int index_arr[N];
    int min_index = INT_MAX;
    for(int i = 0; i < N; i++){
        index_arr[i] = -1;
    }
    for(int i = 0; i < n; i++){
        if(index_arr[arr[i]] != -1){
            min_index = min(min_index, index_arr[arr[i]]);
        }
        else{
            index_arr[arr[i]] = i;
        }
    }
    cout << endl;
    if(min_index == INT_MAX){
        cout << min_index << endl;
    }
    else{
        cout << min_index << endl;
    }

}