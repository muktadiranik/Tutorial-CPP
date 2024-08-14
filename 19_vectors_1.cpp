#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v_1;
    v_1.push_back(10);
    v_1.push_back(2);
    v_1.push_back(30);
    v_1.push_back(4);
    for(int i = 0; i < v_1.size(); i++){
        cout << v_1[i] << " ";
    }
    cout << endl;

    vector<int>::iterator i;
    for(i = v_1.begin(); i != v_1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    for(auto element:v_1){
        cout << element << " ";
    }
    cout << endl;

    vector<int> v_2(4, 100);
    for(auto element:v_2){
        cout << element << " ";
    }
    cout << endl;

    swap(v_1, v_2);
    for(auto e:v_1){
        cout << e << " ";
    }
    cout << endl;
    for(auto e:v_2){
        cout << e << " ";
    }
    cout << endl;

    sort(v_2.begin(), v_2.end());
    for(auto e:v_2){
        cout << e << " ";
    }
    cout << endl;
}