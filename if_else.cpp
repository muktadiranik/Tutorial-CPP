#include<iostream>
using namespace std;
int main(){
    cout << "a: ";
    int a;
    cin >> a;
    if(a < 10){
        cout << "a < 10";
    }
    else if(a < 20){
        cout << "a < 20";
    }
    else{
        cout << "a > 20";
    }
}