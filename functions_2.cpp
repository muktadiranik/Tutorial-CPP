#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int total = 0;
    for (int i = 0; i <= n; i++)
    {
        total = total + i;
    }
    return total;
}

int reverse(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        int reminder = n % 10;
        reversed = reversed * 10 + reminder;
        n = n / 10;
    }
    return reversed;
}

int octal_to_decimal(int n)
{
    int ans = 0;
    int base = 1;
    while(n > 0){
        int reminder = n % 10;
        ans = ans + base * reminder;
        base = base * 8;
        n = n / 10;
    }
    return ans;
}

int binary_to_decimal(int n)
{
    int ans = 0;
    int base = 1;
    while(n > 0){
        int reminder = n % 10;
        ans = ans + base * reminder;
        base = base * 2;
        n = n / 10;
    }
    return ans;
}

int hexadecimal_to_decimal(string n){
    int ans = 0;
    int base  = 1;
    int size = n.size();
    for(int i = size - 1; i >= 0; i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans = ans + base * (n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans = ans + base * (n[i] - 'A' + 10);
        }
        base = base * 16;
    }
    return ans;
    
}

int decimal_to_binary(int n){
    int base = 1;
    int ans = 0;
    while(base <= n){
        base = base * 2;
    }
    base = base / 2;
    while(base > 0){
        int last_digit = n / base;
        n = n - last_digit * base;
        base = base / 2;
        ans = ans * 10 + last_digit;
    }
    return ans;

}

bool pythogorian(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << sum(5);
    cout << endl;
    cout << pythogorian(3, 4, 5);

    cout << endl;
    cout << octal_to_decimal(555);

    cout << endl;
    cout << binary_to_decimal(101010);

    string x = "1CF";
    cout << endl;
    cout << hexadecimal_to_decimal(x);

    cout << endl;
    cout << decimal_to_binary(15);


}