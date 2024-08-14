#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr_2d[2][2] = {
        {1, 2},
        {3, 4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr_2d[i][j] << " ";
        }
        cout << endl;
    }

    // dynamic array
    vector<int> int_vect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (int i = 0; i < 20; i++)
    {
        int_vect.push_back(rand());
    }
    for (int i = 0; i < int_vect.size(); i++)
    {
        cout << int_vect.at(i) << " ";
    }
    cout << endl;

    int int_arr[5] = {1, 2, 3, 4, 5};
    int_vect.insert(int_vect.begin(), int_arr, int_arr + 2);
    int_vect.pop_back();
    for (const int &i : int_vect)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << int_vect.empty() << endl;
    cout << int_vect.front() << " " << int_vect.back() << endl;
    cout << int_vect.size() << endl;

    return 0;
}