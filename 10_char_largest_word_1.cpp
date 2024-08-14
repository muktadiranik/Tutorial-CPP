#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 100;
    char arr[n];
    cout << "arr: ";
    cin.getline(arr, n);

    int i = 0;
    int curr_len = 0, max_len = 0;
    int end = 0;
    while(true){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(curr_len > max_len){
                max_len = curr_len;
                end = i;
            }
            curr_len = 0;
        }
        else{
            curr_len++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    int start = end - max_len;
    cout << max_len << " " << curr_len << " " << start << " " << end << endl;
    for(int i = 0; i < max_len; i++){
        cout << arr[start + i];
    }

    return 0;
}