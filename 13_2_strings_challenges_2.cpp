#include<bits/stdc++.h>
using namespace std;
string biggest_number(string str){
    sort(str.begin(), str.end(), greater<int>());
    return str;
}

void max_count_char(string str){
    int freq[26];
    for(int i = 0; i < 26; i++){
        freq[i] = 0;
    }

    for(int i = 0; i < str.length(); i++){
        freq[str[i] - 'A']++;
    }

    int max_freq = 0;
    char max_char = 'A';
    for(int i = 0; i < 26; i++){
        if(freq[i] > max_freq){
            max_freq = freq[i];
            max_char = i + 'A';
        }
    }

    cout << max_freq << " " << max_char << endl;

}

int main(){
    string str = "12345";
    cout << biggest_number(str) << endl;
    str.clear();
    str = "ABCABCA";
    max_count_char(str);
}