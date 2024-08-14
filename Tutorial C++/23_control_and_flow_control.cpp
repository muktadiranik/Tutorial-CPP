#include <bits/stdc++.h>
using namespace std;
int main()
{
    // variables
    int i = 5;
    string str = "this is a string";

    // control statement
    if ((i % 2 == 0) || (i % 4 == 0))
    {
        cout << "even" << endl;
    }
    else if ((i % 3 == 0) && (i % 5 == 0))
    {
        cout << "odd" << endl;
    }
    else
    {
        cout << i << endl;
    }

    // switch
    switch (i % 2)
    {
    case 0:
        cout << "even" << endl;
        break;
    case 1:
        cout << "odd" << endl;
        break;
    default:
        break;
    }

    // while loop
    int rand_num = (rand() % 100) + 1;
    while (rand_num < 100)
    {
        cout << rand_num << " ";
        rand_num = (rand() % 100) + 1;
    }
    cout << endl;

    // do while loop
    int count = 0;
    do
    {
        cout << count << " ";
        count++;
    } while (count < 5);
    cout << endl;

    string num_guessed;
    int int_num_guessed = 0;
    do
    {
        cout << "enter a number: ";
        getline(cin, num_guessed);
        int_num_guessed = stoi(num_guessed);
        cout << num_guessed << endl;
    } while (int_num_guessed != 4);

    // break, continue
    count = 0;
    do
    {
        count++;
        if (count % 3 == 0)
        {
            continue;
        }
        cout << count << " ";
        if (count == 10)
        {
            break;
        }

    } while (count <= 100);

    return 0;
}