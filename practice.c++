// count 1 to 1000000010000000

#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 10000000; i++)
    {
        count++;
        // print count after every 1000000
        if (count % 1000000 == 0)
        {
            cout << count << endl;
        }
    }
    cout << count;
    return 0;
}