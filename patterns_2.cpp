#include<iostream>
using namespace std;
int main(){
    int i, j;
    for(i = 5; i >= 1; i--){
        for(j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    for(i = 0; i <= 5; i++){
        for(j = 0; j <= i; j++){
            if((i + j) % 2 == 0){
                cout << 1 << " ";
            }
            else{
                cout << 0 << " ";
            }

        }
        cout << endl;
    }

    for(i = 0; i <= 5; i++){
        for(j = 5; j >= i; j--){
            cout << " ";
        }
        for(j = 0; j <= 5; j++){
            cout << "#";
        }
        cout << endl;
    }

    for (i = 0; i <= 5; i++){
        for (j = 5; j >= i; j--){
            cout << " ";
        }
        
        for (j = 0; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = 0; i <= 5; i++){
        for (j = 5; j >= i; j--){
            cout << "  ";
        }
        int a = i;
        for (j = -1; j < i; j++){
            cout << a << " ";
            a = a - 1;
        }
        a = 0;
        for (j = 0; j < i; j++){
            a = a + 1;
            cout << a << " ";
        }
        cout << endl;
    }

    for (i = 0; i <= 5; i++){
        for (j = 5; j >= i; j--){
            cout << " ";
        }
        for (j = 0; j <= i; j++){
            cout << "#";
        }
        for (j = 1; j <= i; j++){
            cout << "#";
        }
        cout << endl;
    }
    for (i = 6; i >= 0; i--){
        for (j = 5; j >= i; j--){
            cout << " ";
        }
        for (j = 0; j < i; j++){
            cout << "#";
        }
        for (j = 0; j <= i; j++){
            cout << "#";
        }
        cout << endl;
    }

    cout << endl;

    for(i = 0; i < 3; i++){
        for (j = 0; j < 9; j++){
            if(i % 2 == 0 && j % 2 == 0){
                if((i + j) % 4 == 0){
                    cout << "X" << " ";
                }
                else{
                    cout << "O" << " ";
                }
            }
            else{
                if((i + j) % 2 == 0){
                    cout << "X" << " ";
                }
                else{
                    cout << "O" << " ";
                }
            }
        }
        cout << endl;
    }
}