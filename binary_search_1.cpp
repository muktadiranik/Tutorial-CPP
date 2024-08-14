#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int size, int x){
    for(int i = 0; i < size; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int size, int x){
    int left_index = 0;
    int right_index = size - 1;
    
    while (left_index <= right_index){
        int mid_index = (left_index + right_index) / 2;
        int mid_index_number = arr[mid_index];
        if (x == mid_index_number){
            return mid_index;
        }
        if (mid_index_number < x){
            left_index = mid_index + 1;
        }
        else{
            right_index = mid_index - 1;
        }
    }
    return -1;
}

int binary_search_recursive(int arr[], int x, int left_index, int right_index){
    if (right_index < left_index){
        return -1;
    }
    int mid_index = (left_index + right_index) / 2;
    int mid_index_number = arr[mid_index];
    if(mid_index_number == x){
        return mid_index;
    }
    if(mid_index_number < x){
        left_index = mid_index + 1;
    }
    else{
        right_index = mid_index - 1;
    }
    return binary_search_recursive(arr, x, left_index, right_index);
}

int main(){
    int arr[6] = {22, 24, 88, 86, 88, 94};

    cout << endl;
    cout << linear_search(arr, 6, 24);

    cout << endl;
    cout << binary_search(arr, 6, 24);

    cout << endl;
    cout << binary_search_recursive(arr, 88, 0, 6);

}