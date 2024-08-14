#include<bits/stdc++.h>
using namespace std;
bool matrix_search(int x){
    int n = 3, m = 4;
    int arr[n][m] = {{1, 4, 7, 10}, 
                    {2, 5, 8, 11}, 
                    {3, 6, 9, 12}};
    int row = 0, column = m - 1;
    while(row < n && column >= 0){
        if(arr[row][column] == x){
            return true;
        }
        arr[row][column] > x ? column-- : row++;
    }
    return false;
}

int main(){
    int x;
    cout << "x: ";
    cin >> x;
    cout << matrix_search(x);
}