#include <bits/stdc++.h>
using namespace std;
int add_nums(int x, int y = 0)
{
    return x + y;
}

int add_nums(int x, int y, int z)
{
    return x + y + z;
}

// recursion
int get_factorial(int num)
{
    int sum;
    if (num == 1)
    {
        sum = 1;
    }
    else
    {
        sum = get_factorial(num - 1) * num;
    }
    return sum;
}

int main()
{
    cout << add_nums(2, 4) << endl;
    cout << add_nums(2, 4, 6) << endl;
    cout << get_factorial(5) << endl;

    return 0;
}