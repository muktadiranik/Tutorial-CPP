#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5;
    int *aptr;
    aptr = &a;
    cout << *aptr << endl;
    int **aptrptr = &aptr;
    cout << *aptrptr << endl;
    int b = 10;
    int *bptr = &b;
    cout << bptr << endl;

    int i = 2;
    int j = 4;
    swap(&i, &j);
    cout << i << " " << j << endl;
}