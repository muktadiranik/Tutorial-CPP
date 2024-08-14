#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n = 12345;
    int reversed = 0;
    while(n > 0){
        int reminder = n % 10;
        reversed = reversed * 10 + reminder;
        n = n / 10;
    }

    cout << reversed << endl;

    // armstrong number

    cout << "n: ";
    cin >> n;
    int m = n;
    reversed = 0;
    while(m > 0){
        int reminder = m % 10;
        reversed = reversed + pow(reminder, 3) ;
        m = m / 10;
    }

    if(reversed == n){
        cout << "armstrong number";
    }
    else{
        cout << "non armstrong number";
    }

}