#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i <= 100; i++){
        if(i % 2 == 0){
            continue;
        }

        cout << i;


        if(i == 15){
            break;
        }
    }
}