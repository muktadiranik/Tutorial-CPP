#include<bits/stdc++.h>
using namespace std;
bool my_compare(pair<int, int> p_1, pair<int, int> p_2){
    return p_1.second < p_2.second;
}

void sort_pair_vector(){
    int arr[] = {88, 84, 66, 12, 24, 80, 20, 68, 78, 90};
    vector<pair<int, int>> v;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        v.push_back(make_pair(i, arr[i]));
    }
    
    sort(v.begin(), v.end(), my_compare);

    for(int i = 0; i < n; i++){
        arr[v[i].first] = i;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    sort_pair_vector();
}