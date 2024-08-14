#include<bits/stdc++.h>
using namespace std;
bool matrix_search(int x){
    int n = 3, m = 3;
    int arr[n][n] = {{1, 2, 3}, 
                    {4, 5, 6}, 
                    {7, 8, 9}};
    for(int  i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == x){
                cout << arr[i][j];
                return true;
            }
        }
    }
    return false;
}

int main(){
    int x;
    cout << "x: ";
    cin >> x;
    cout << matrix_search(x);
}