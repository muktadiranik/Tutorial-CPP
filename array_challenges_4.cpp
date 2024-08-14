#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {1, 2, 3, 7, 5};
    int s = 12;
    int i = 0, j = 0, test_sum = 0;
    while(test_sum + arr[j] <= s && j < n){
        test_sum = test_sum + arr[j];
        j++;
    }
    if(test_sum == s){
        cout << i << " " << j;
        return 0;
    }
    while(i < j){
        test_sum = test_sum + arr[j];
        while(test_sum > s){
            test_sum = test_sum - arr[i];
            i++;
        }
        if(test_sum == s){
            cout << i << " " << j;
            return 0;
        }
    }
}