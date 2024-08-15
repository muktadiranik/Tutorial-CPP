#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

using namespace std;

int main(int argc, char **argv)
{
    // if else
    int i = 0;
    if (i == 0)
    {
        cout << "i is 0" << endl;
    }
    else
    {
        cout << "i is not 0" << endl;
    }

    // if else if
    if (i == 0)
    {
        cout << "i is 0" << endl;
    }
    else if (i == 1)
    {
        cout << "i is 1" << endl;
    }
    else
    {
        cout << "i is not 0 or 1" << endl;
    }

    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << str << endl;
    if (str.length() > 0)
    {
        cout << "The length of the string is " << str.length() << endl;
    }
    else
    {
        cout << "The string is empty" << endl;
    }

    // switch
    switch (i)
    {
    case 0:
        cout << "i is 0" << endl;
        break;
    case 1:
        cout << "i is 1" << endl;
        break;
    default:
        cout << "i is not 0 or 1" << endl;
        break;
    }

    // arrays
    int array[3] = {0, 1, 2};
    cout << "sizeof(array): " << sizeof(array) << endl;
    cout << "sizeof(*array): " << sizeof(*array) << endl;
    cout << "sizeof(array) / sizeof(*array): " << sizeof(array) / sizeof(*array) << endl;

    for (int i = 0; i < sizeof(array) / sizeof(*array); i++)
    {
        cout << "array[" << i << "]: " << array[i] << endl;
    }

    // multi dimensional array
    int multiArray[2][3] = {{0, 1, 2}, {3, 4, 5}};

    for (int i = 0; i < sizeof(multiArray) / sizeof(*multiArray); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "multiArray[" << i << "][" << j << "]: " << multiArray[i][j] << endl;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << multiArray[i][j] << " ";
        }
        cout << endl;
    }

    // three dimensional array
    int threeDimensionalArray[2][3][4] = {{{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}}, {{12, 13, 14, 15}, {16, 17, 18, 19}, {20, 21, 22, 23}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cout << "threeDimensionalArray[" << i << "][" << j << "][" << k << "]: " << threeDimensionalArray[i][j][k] << endl;
            }
        }
    }

    // vectors
    vector<int> intVector = {0, 1, 2};
    cout << "intVector[0]: " << intVector[0] << endl;
    cout << "intVector[1]: " << intVector[1] << endl;
    cout << "intVector[2]: " << intVector[2] << endl;

    // append to vector
    intVector.push_back(3);
    intVector.push_back(4);
    intVector.push_back(5);

    for (int i = 0; i < intVector.size(); i++)
    {
        cout << "intVector[" << i << "]: " << intVector[i] << endl;
    }

    for (int i : intVector)
    {
        cout << "intVector[" << i << "]: " << intVector[i] << endl;
    }

    vector<string> stringVector = {"Hello", "World"};

    for (string s : stringVector)
    {
        cout << s << endl;
    }

    vector<double> doubleVector = {0.1, 0.2, 0.3};
    i = 0;
    while (i < 10)
    {
        doubleVector.push_back(i / 10.0);
        i++;
    }

    for (double d : doubleVector)
    {
        cout << d << endl;
    }

    // string to array
    string str2 = "Hello World";
    vector<string> stringVector2;
    stringstream ss(str2);
    string word;
    char delimeter = ' ';
    while (getline(ss, word, delimeter))
    {
        stringVector2.push_back(word);
    }

    for (string s : stringVector2)
    {
        cout << s << endl;
    }

    // calculator
    cout << "Enter calculation: ";
    string calculation;
    getline(cin, calculation);
    cout << calculation << endl;

    vector<string> calculationVector;
    stringstream ss2(calculation);
    string word2;
    char delimeter2 = ' ';
    while (getline(ss2, word2, delimeter2))
    {
        calculationVector.push_back(word2);
    }

    string operation = calculationVector[1];
    double result = 0.0;
    double num1 = calculationVector[0].empty() ? 0.0 : stod(calculationVector[0]);
    double num2 = calculationVector[2].empty() ? 0.0 : stod(calculationVector[2]);

    try
    {
        if (operation == "+")
        {
            result = num1 + num2;
        }
        else if (operation == "-")
        {
            result = num1 - num2;
        }
        else if (operation == "*")
        {
            result = num1 * num2;
        }
        else if (operation == "/")
        {
            result = num1 / num2;
        }
    }
    catch (exception e)
    {
        cout << "Error: " << e.what() << endl;
    }

    cout << "Result: " << result << endl;

    return 0;
}