#include<bits/stdc++.h>
using namespace std;
void sample(){
    pair <int, char> p;
    p.first = 1;
    p.second = 'a';
    cout << p.first << " " << p.second << endl;
}

bool my_compare(pair<int , int> p_1, pair<int , int> p_2){
    return p_1.first < p_2.first;
}

void sort_pair_vector(){
    int arr[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    vector <pair<int, int>> v;
    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end(), my_compare);
    for(auto e:v){
        cout << e.first << " " << e.second << endl;
    }
    cout << endl;

    for(int i = 0; i < v.size(); i++){
        arr[v[i].second] = i;
    }
    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        cout << arr[i] << " ";
    }
}

int main(){
    sort_pair_vector();
}