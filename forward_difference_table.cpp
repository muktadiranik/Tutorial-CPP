#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "n: ";
    cin >> n;

    float x[n], y[n][n];

    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i][0];
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i; j ++){
            y[i][j] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }

    for(int i = 0; i < n; i++){
        cout << x[i] << " ";
        for(int j = 0; j < n - i; j++){
            cout << y[i][j] << " ";
        }
        cout << " ";
    }


    return 0;
}