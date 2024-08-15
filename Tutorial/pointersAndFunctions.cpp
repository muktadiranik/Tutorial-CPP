#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

using namespace std;

double add(double a, double b)
{
    return a + b;
}

double substract(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);
void changeValue(int *a, int b);
void doubleArrayValues(int *a, int size);
vector<int> createVector(int startingValue, int endingValue, int step);

int main(int argc, char **argv)
{
    // vectors
    vector<int> vector1(10);
    iota(vector1.begin(), vector1.end(), 0);

    for (int i = 0; vector1.size() > i; i++)
    {
        cout << vector1[i] << " ";
    }

    cout << endl;

    for (auto i : vector1)
    {
        cout << i << " ";
    }

    cout << endl;

    for (auto i : vector1)
    {
        if (i % 2 == 0)
        {
            cout << i << " is even" << endl;
        }
        else
        {
            cout << i << " is odd" << endl;
        }
    }

    vector<int> evenVector;
    vector<int> oddVector;

    for (auto i : vector1)
    {
        if (i % 2 == 0)
        {
            evenVector.push_back(i);
        }
        else
        {
            oddVector.push_back(i);
        }
    }

    for (auto i : evenVector)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : oddVector)
    {
        cout << i << " ";
    }
    cout << endl;

    // vector operation
    cout << "Sum of even numbers: " << accumulate(evenVector.begin(), evenVector.end(), 0) << endl;
    cout << "Sum of odd numbers: " << accumulate(oddVector.begin(), oddVector.end(), 0) << endl;

    // functions
    cout << "add(5, 6): " << add(5, 6) << endl;
    cout << "substract(6, 5): " << substract(6, 5) << endl;
    cout << "multiplication(5, 6): " << multiplication(5, 6) << endl;
    cout << "division(6, 5): " << division(6, 5) << endl;
    cout << "division(6, 0): " << division(6, 0) << endl;

    // pointers
    int i = 0;
    int *p = &i;
    cout << "Value of i: " << i << endl;
    cout << "Value of i: " << *p << endl;
    cout << "Address of i: " << p << endl;
    cout << "Address of i: " << &i << endl;

    int intArray[] = {1, 2, 3, 4, 5};
    int *pointerIntArray = intArray;
    cout << "Address of pointerIntArray: " << pointerIntArray << endl;
    cout << "Value of pointerIntArray: " << *pointerIntArray << endl;
    pointerIntArray++;
    cout << "Address of pointerIntArray: " << pointerIntArray << endl;
    cout << "Value of pointerIntArray: " << *pointerIntArray << endl;
    cout << "Address of pointerIntArray: " << pointerIntArray << endl;
    pointerIntArray--;
    cout << "Value of pointerIntArray: " << *pointerIntArray << endl;

    // print the array using pointers
    for (int *p = intArray; p < intArray + (sizeof(intArray) / sizeof(*intArray)); p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    // change value by using pointer
    int a = 10;
    cout << "Value of a: " << a << endl;

    changeValue(&a, 20);
    cout << "changeValue(&a, 20): " << a << endl;

    int array[] = {1, 2, 3, 4, 5};

    for (int i : array)
    {
        cout << i << " ";
    }
    cout << endl;

    doubleArrayValues(array, sizeof(array) / sizeof(*array));

    for (int i = 0; i < sizeof(array) / sizeof(*array); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // create vector
    vector<int> vector2 = createVector(1, 10, 1);
    for (int i : vector2)
    {
        cout << i << " ";
    }
    cout << endl;

    int startingValue = 1;
    int endingValue = 10;
    int step = 1;
    int result = 0;

    for (auto i : createVector(startingValue, endingValue, step))
    {
        result += 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

// functions
double substract(double a, double b)
{
    return a - b;
}

double multiplication(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    try
    {
        return a / b;
    }
    catch (exception e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}

void changeValue(int *a, int b)
{
    *a = b;
}

void doubleArrayValues(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] *= 2;
    }
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
