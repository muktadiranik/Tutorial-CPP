#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i <= 5; i++){
        for (int j = 0; j <= 5; j++){
            cout << "#";
        }
        cout << endl;
    }
    int i, j, k;
    for(i = 0; i <= 5; i++){
        for(j = 0; j <= 5; j++){
            if (i == 0 || i == 5){
                cout << "#";
            }
            else{
                if (j == 0 || j == 5){
                    cout << "#";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    for (i = 5; i >= 0; i--){
        for (j = 0; j <= i; j++){
            cout << "#";
        }
        cout << endl;
    }

    for(i = 0; i <= 5; i++){
        for (j = 5; j >= i; j--){
            cout << " ";
        }
        for (k = 0; k <= i; k++){
            cout << "#";
        }
        
        cout << endl;
    }

    for(i = 0; i <=5; i++){
        for (j = 0; j <=i ; j++){
            cout << i;
        }
        cout << endl;
    }

    k = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j <= i; j++){
            cout << ++k;
        }
        cout << endl;
    }

    for(i = 0; i <= 5; i++){
        for(j = 0; j <= i; j++){
            cout << "#";
        }
        int k = (2 * 5) - (2 * i);
        for(j = 0; j <= k; j++){
            cout << " ";
        }
        for(j = 0; j <= i; j++){
            cout << "#";
        }        
        cout << endl;
    }
    for(i = 5; i >= 0; i--){
        for(j = 0; j <= i; j++){
            cout << "#";
        }
        int k = (2 * 5) - (2 * i);
        for(j = 0; j <= k; j++){
            cout << " ";
        }
        for(j = 0; j <= i; j++){
            cout << "#";
        }        
        cout << endl;
    }


    for(i = 5; i >= 0; i--){
        for(j = 0; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}