#include<bits/stdc++.h>
using namespace std;
int main(){
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
    int x = 8;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == x){
                cout << x << " == " << arr[i][j]<< endl;
                cout << i << " " << j << endl;
            }
        }
    }
}