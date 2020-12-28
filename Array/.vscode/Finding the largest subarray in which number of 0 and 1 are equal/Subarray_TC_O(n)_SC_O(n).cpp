#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[] = {1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0};
    int arr[] = {0, 1, 1, 0, 1, 0};
    // int arr[] = {1, 1, 1, 1};
    unordered_map<int, int> hashtable;
    int sum = 0;
    int x = 0;
    int start = 0, end = 0, size = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
    }
    // -1 1 1 -1 1 -1
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            int temp_start = 0;
            int temp_size = i - temp_start + 1;
            if (temp_size > size)
            {
                start = temp_start;
                end = i;
                size = end - start + 1;
            }
        }

        if (hashtable.find(sum - x) != hashtable.end())
        {
            int temp_start = hashtable[sum - x] + 1;
            int temp_size = i - temp_start + 1;
            if (temp_size > size)
            {
                start = temp_start;
                end = i;
                size = end - start + 1;
            }
        }
        else
        {
            hashtable.insert(make_pair(sum, i));
        }
    }
    for (int i = start; i <= end && start != end; i++)
    {
        if (arr[i] == -1)
        {
            arr[i] = 0;
        }
        cout << arr[i] << " ";
    }

    return 0;
}