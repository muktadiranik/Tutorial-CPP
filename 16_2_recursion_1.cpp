#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int arr[], int n){
    if(n == 1){
        return true;
    }
    bool sorted = is_sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && sorted);
} 

void decreasing(int n){
    if(n == 0){
        return;
    }
    cout << n << " ";
    decreasing(n - 1);
}

void increasing(int n, int m){
    if (n == m){
        return;
    }
    cout << n << " ";
    increasing(n + 1, m);
}

void increasing_form_zero(int n){
    if (n == 0){
        return;
    }
    increasing_form_zero(n - 1);
    cout << n << " ";
}

int first_occurrence(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return first_occurrence(arr, n, i + 1, key);
}

int last_occurrence(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }
    int rest_arr = last_occurrence(arr, n, i + 1, key);
    if(rest_arr != -1){
        return rest_arr;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}

int main(){
    int arr[12] = {1, 2, 3, 4, 5, 2, 6, 7, 8, 2, 9, 0};
    cout << first_occurrence(arr, 12, 0, 2) << endl;
    cout << last_occurrence(arr, 12, 0, 2) << endl;
}