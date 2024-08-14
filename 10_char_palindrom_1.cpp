#include<bits/stdc++.h>
using namespace std;
bool palindrom(char arr[]){
    int i = 0, j = 0;
    while(true){
        if(arr[j] == '\0'){
            break;
        }
        else{
            j++;
        }
    }
    j--;
    while(i < j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char arr[100];
    cout << "arr: ";
    cin >> arr;
    cout << palindrom(arr);
}