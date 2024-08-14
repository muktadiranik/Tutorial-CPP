#include<bits/stdc++.h>
using namespace std;
int main(){
    int i = 10;
    int *iptr = &i;
    cout << *iptr << " " << &i << endl;

    int arr[3] = {5, 10, 15};
    int *arrptr = arr;
    cout << *arrptr << endl;
    for(int i = 0; i < 3; i++){
        cout << *arrptr << endl;
        *arrptr++;
    }
    for(int i = 0; i < 3; i++){
        cout << *(arr + i) << endl;
    }
}