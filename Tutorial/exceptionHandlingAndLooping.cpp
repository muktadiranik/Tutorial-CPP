#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

using namespace std;

vector<int> createVector(int startingValue, int endingValue, int step);
double divide(double a, double b);

int main(int argc, char **argv)
{
    int i = 0;

    // while
    while (i <= 20)
    {
        if (i % 2 == 0)
        {
            i += 1;
            continue;
        }
        if (i == 10)
        {
            break;
        }
        cout << i << " ";
        i += 1;
    }

    cout << endl;

    // print a tree with 10 levels
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // print a tree using vector with 10 levels
    int treeHeight = 10;
    int spaces = treeHeight - 1;
    int stars = 1;
    int stumpSpaces = treeHeight - 1;

    while (treeHeight != 0)
    {
        for (auto x : createVector(1, spaces, 1))
        {
            cout << " ";
        }
        for (auto x : createVector(1, stars, 1))
        {
            cout << "*";
        }
        cout << endl;
        spaces -= 1;
        stars += 2;
        treeHeight -= 1;
    }

    for (auto x : createVector(1, stumpSpaces, 1))
    {
        cout << " ";
    }
    cout << "*" << endl;

    // exception handling
    try
    {
        cout << divide(10, 0) << endl;
    }
    catch (exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    try
    {
        cout << "10 / 0 = " << divide(10, 0) << endl;
    }
    catch (exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    try
    {
        cout << "Throwing exception" << endl;
        throw exception();
    }
    catch (exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    // do while
    i = 0;
    do
    {
        if (i % 2 == 0)
        {
            i += 1;
            continue;
        }
        if (i == 10)
        {
            break;
        }
        cout << i << " ";
        i += 1;
    } while (i < 20);

    cout << endl;

    srand(time(NULL));
    int randomNumber = rand() % 100 + 1;
    cout << randomNumber << endl;

    return 0;
}

vector<int> createVector(int startingValue, int endingValue, int step)
{
    vector<int> v;
    for (int i = startingValue; i <= endingValue; i += step)
    {
        v.push_back(i);
    }
    return v;
}

double divide(double a, double b)
{
    return a / b;
}