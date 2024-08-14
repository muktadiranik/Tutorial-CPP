#include<bits/stdc++.h>
using namespace std;
void reverse(string str){
    if(str.length() == 0){
        return;
    }
    string rest_str = str.substr(1);
    reverse(rest_str);
    cout << str[0];
}

void replace(string str){
    if(str.length() == 0){
        return;
    }
    if(str[0] == 'p' && str[1] == 'i'){
        cout << "3.1416";
        replace(str.substr(2));
    }
    else{
        cout << str[0];
        replace(str.substr(1));
    }
}

void tower_of_henoi(int n, char src, char des, char helper){
    if(n == 0){
        return;
    }
    tower_of_henoi(n - 1, src, helper, des);
    cout << src << " to " << des << endl;
    tower_of_henoi(n - 1, helper, des, src);
}

string remove_duplicate(string str){
    if(str.length() == 0){
        return "";
    }
    char ch = str[0];
    string removed = remove_duplicate(str.substr(1));
    if(ch == removed[0]){
        return removed;
    }
    return ch + removed;
}

string move_all_to_end(string str, char x){
    if(str.length() == 0){
        return "";
    }
    char ch = str[0];
    string rest_str = move_all_to_end(str.substr(1), x);
    if(ch == x){
        return rest_str + ch;
    }
    return ch + rest_str;
}

void subsequence(string str, string ans){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    string rest_str = str.substr(1);
    subsequence(rest_str, ans);
    subsequence(rest_str, ans + ch);
}

void subsequence_ascii(string str, string ans){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    int ascii = ch;
    string rest_str = str.substr(1);
    subsequence_ascii(rest_str, ans);
    subsequence_ascii(rest_str, ans + ch);
    subsequence_ascii(rest_str, ans + to_string(ascii));
}

string key_arr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keypad(string str, string ans){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    string value = key_arr[ch - '0'];
    string rest_str = str.substr(1);
    for(int i = 0; i < value.length(); i++){
        keypad(rest_str, ans + value[i]);
    }
}


int main(){
    string str = "pipppippxxpi";
    char x = 'p';
    keypad("23", "");
}