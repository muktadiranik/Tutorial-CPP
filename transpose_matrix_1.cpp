#include<bits/stdc++.h>
using namespace std;
int transpose_matrix(){
    int n = 3, m = 3;
    int arr[n][m] = {{1, 2, 3}, 
                    {4, 5, 6}, 
                    {7, 8, 9}};
    for(int i = 0; i < n; i++){
        for(int j = i; j < m; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}

int main(){
    transpose_matrix();
}