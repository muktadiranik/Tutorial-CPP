#include<bits/stdc++.h>
using namespace std;
void permutation(string str, string ans){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        string rest_str = str.substr(0, i) + str.substr(i + 1);
        permutation(rest_str, ans + ch);
    }
}

int count_path(int start, int end){
    if(start == end){
        return 1;
    }
    if(start > end){
        return 0;
    }
    int dice = 6;
    int count = 0;
    for(int i = 1; i <= dice; i++){
        count += count_path(start + i, end);
    }
    return count;
}

int count_path_maze(int n, int i, int j){
    if(i == n - 1 && j == n - 1){
        return 1;
    }
    if(i >= n || j >= n){
        return 0;
    }
    return count_path_maze(n, i + 1, j) + count_path_maze(n, i, j + 1);
}

int tiling_ways(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return tiling_ways(n - 1) + tiling_ways(n - 2);
}

int friends_pairing(int n){
    if(n == 0 || n == 1 || n == 2){
        return n;
    }
    return friends_pairing(n - 1) + friends_pairing(n - 2) * (n - 1);
}

int knapsack(int value[], int weight[], int n, int W){
    if(n == 0 || W == 0){
        return 0;
    }
    if(weight[n - 1] > W){
        return knapsack(value, weight, n - 1, W);
    }
    return max(knapsack(value, weight, n - 1, W - weight[n - 1]) + value[n - 1], knapsack(value, weight, n - 1, W));
}

int main(){
    int n = 4;
    int value[] = {50, 150, 250, 350};
    int weight[] = {10, 20, 30, 40};
    int W = 60;
    cout << knapsack(value, weight, n, W) << endl;
}