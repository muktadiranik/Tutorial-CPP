#include <iostream>
using namespace std;
int main()
{

    int burst_time[4];
    int arrival_time[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> burst_time[i] >> arrival_time[i];
    }

    int waiting_time[4];
    int t = 0;
    int time[4];

    for (int i = 0; i < 4; i++)
    {
        waiting_time[i] = t - arrival_time[i];
        t = t + burst_time[i];
        time[i] = t;
        cout << "P" << (i + 1) << " waiting_time: " << waiting_time[i] << endl;
    }

    float average_waiting_time = 0;

    for (int i = 0; i < 4; i++)
    {
        average_waiting_time = average_waiting_time + waiting_time[i];
    }

    average_waiting_time = average_waiting_time / 4;
    cout << "average_waiting_time: " << average_waiting_time << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "P" << (i + 1) << "|" << time[i] << "|";
    }

    return 0;
}
