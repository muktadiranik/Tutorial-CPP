#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, i, j;
    cout << "n: ";
    cin >> n;

    bool flag = true;       

    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << "non prime" << endl << " i: " << i;
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout << "prime";
    }
}