#include<bits/stdc++.h>
using namespace std;
int spiral_order_matrix_traversal(){
    // array
    int n = 4, m = 4;
    int arr[n][m] = {{1, 2, 3, 4}, 
                    {5, 6, 7, 8}, 
                    {9, 8, 7, 6}, 
                    {5, 4, 3, 2}};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // spiral order traversal
    int row_start = 0;
    int row_end = n - 1;
    int column_start = 0; 
    int column_end = m - 1;

    while(row_start <= row_end && column_start <= column_end){
        for(int i = column_start; i <= column_end; i++){
            cout << arr[row_start][i] << " ";
        }
        row_start++;
        for(int i = row_start; i <= row_end; i++){
            cout << arr[i][column_end] << " ";
        }
        column_end--;
        for(int i = column_end; i >= column_start; i--){
            cout << arr[row_end][i] << " ";
        }
        row_end--;
        for(int i = row_end; i >= row_start; i--){
            cout << arr[i][column_start] << " ";
        }
        column_start++;
    }
        


    return 0;
}

int main(){
    spiral_order_matrix_traversal();
}