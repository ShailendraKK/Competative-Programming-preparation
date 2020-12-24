#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 1, 0};
    int zero_count = 0;
    int one_count = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 0)
        {
            zero_count++;
        }
        else
        {
            one_count++;
        }
    }
    int index = 0;
    while (zero_count)
    {
        arr[index] = 0;
        zero_count--;
        index++;
    }
    while (one_count)
    {
        arr[index] = 1;
        one_count--;
        index++;
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}