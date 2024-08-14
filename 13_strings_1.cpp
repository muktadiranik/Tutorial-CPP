#include<bits/stdc++.h>
using namespace std;
void input(){
    string a;
    cout << "a_with_spaces: ";
    getline(cin, a);
    cout << a << endl;
}

void str_compare(){
    string str_1, str_2;
    getline(cin, str_1);
    getline(cin, str_2);
    cout << str_1.compare(str_2) << endl;
    int i = str_1.compare(str_2);
    if (i == 0){
        cout << "same";
    }
    else if (i > 0){
        cout << "str_1 is greater than str_2";
    }
    else{
        cout << "str_1 is less than str_2";
    }
}

int main(){
    string str = "this is a string";
    cout << str << endl;

    string str_1 = "string";
    string str_2 = "append";
    cout << str_1 + " " + str_2 << endl;
    str_1.append(str_2);
    cout << str_1 << endl;;

    cout << str_1[0] << str_1[1] << str_1[2] << endl;

    str_1.clear();
    str_2.clear();
    cout << str_1 << " " << str_2 << endl;

    str_1 = "str_1"; 
    str_2 = "str_0";
    cout << str_1.compare(str_2) << endl;

    str_1.clear();
    str_2.clear();
    str_1 = "str_1";
    cout << str_1.empty() << " " << str_2.empty() << endl;
    str_1.clear();

    str_1 = "str_1";
    cout << str_1.erase(3, 1) << endl;
    cout << str_1.erase(3, 2) << endl;
    str_1.clear();

    str_1 = "this string is for find() function";
    cout << str_1 << endl;
    cout << str_1.find("string") << endl;
    cout << str_1.find("for") << endl;

    str_1.insert(15, "used ");
    cout << str_1 << endl;

    cout << str_1.length() << " " << str_1.size() << endl;

    for(int i = 0; i < str_1.length(); i++){
        cout << str_1[i] << "";
    }
    cout << endl;
    string str_sub = str_1.substr(5, 6);
    cout << str_sub << endl;

    str_2 = "12345";
    int str_int = stoi(str_2);
    cout << str_int << endl;
    cout << str_int - 5 << endl;

    str_2 = to_string(str_int);
    cout << str_2 + "6" << endl;

    str_1.clear();
    str_2.clear();

    str_1 = "QWERTYUIOPASDFGHJKLZXCVBNM";
    cout << str_1 << endl;
    sort(str_1.begin(), str_1.end());
    cout << str_1 << endl;

}