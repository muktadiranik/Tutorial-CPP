#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
    for (int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    int max_num = INT_MIN; 
    int min_num = INT_MAX;
    for(int i = 0; i < 4; i++){
        if(arr[i] > max_num){
            max_num = arr[i];
        }
        if(arr[i] < min_num){
            min_num = arr[i];
        }
    }
    for(int i = 0; i < 4; i++){
        cout << arr[i] << endl;
    }

    
    cout << max_num << min_num;

    max_num = INT_MIN;
    min_num = INT_MAX;
    int arr_2[4] = {2, 4, 6, 8};
    for(int i = 0; i < 4; i++){
        max_num = max(max_num, arr_2[i]);
        min_num = min(min_num, arr_2[i]);
    }
    cout << max_num << min_num;
    return 0;
}