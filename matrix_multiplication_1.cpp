#include<bits/stdc++.h>
using namespace std;
int matrix_multiplication(){
    int n = 3, m = 4;
    int arr[n][m] = {{1, 2, 3, 4}, 
                    {5, 6, 7, 8}, 
                    {1, 2, 3, 4}};

    int arr_2[m][n] = {{1, 2, 3}, 
                        {4, 5, 6}, 
                        {7, 8, 9}, 
                        {1, 2, 3}};

    int ans[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans[i][j] = 0;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                ans[i][j] += arr[i][k] * arr_2[k][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int main(){
    matrix_multiplication();
}