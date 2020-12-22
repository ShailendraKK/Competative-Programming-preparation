#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 1, 4, 7, 5, 100, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int diff[len];
    for (int i = 0; i < len - 1; i++)
    {
        diff[i] = arr[i + 1] - arr[i];
    }
    int max = diff[0];
    for (int i = 1; i < len; i++)
    {
        if (diff[i - 1] > 0)
        {
            diff[i - 1] = diff[i] + diff[i - 1];
        }
        max = max > diff[i] ? max : diff[i];
    }
    cout << max << "\n";
    return 0;
}