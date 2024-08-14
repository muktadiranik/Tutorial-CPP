#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int i;
    cout << "n: ";
    cin >> n;
    for (i = 2; i < n; i++){
        if (n % i == 0){
            cout << n << " is non prime" << endl;;
            break;
        }
    }

    if (i == n){
        cout << n << " is prime" << endl;
    }

    int a, b;
    cout << "a: b: " << endl;
    cin >> a >> b;
    int j;

    for(i = a; i <= b; i++){
        for(j = 2; j < i; j++){
            if(i % j == 0){
                break;
            }
        }
        if(i == j){
            cout << i << endl;
        }
    }

    bool flag = true;
    for (i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            cout << "non prime";
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout << "prime";
    }
    
}