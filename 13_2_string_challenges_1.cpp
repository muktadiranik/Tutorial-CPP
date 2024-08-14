#include<bits/stdc++.h>
using namespace std;
string to_upper(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    return str;
}

string to_lower(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    return str;
}

int main(){
    cout << 'A' - 0 << " " << 'a' - 0 << endl;
    cout << 'A' - 'a' << endl;
    string str = "string";
    cout << str << " " << to_upper(str) << endl;
    str = "STRING";
    cout << str << " " << to_lower(str) << endl;

    str.clear();
    str = "transform";
    cout << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    str.clear();
    str = "TRANSFORM";
    cout << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
}