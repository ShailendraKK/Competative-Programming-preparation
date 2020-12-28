#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[] = {8, 5, -2, 3, 4, -5, 7};
    int arr[] = {1, 2, 3};
    unordered_map<int, int> hashtable;
    int sum = 0;
    int x = 6;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];

        if (sum == x)
        {
            cout << "Subarray found "
                 << "\n";
            for (int j = 0; j <= i; j++)
            {
                cout << arr[j] << " ";
            }
            cout << "\n";
        }
        if (hashtable.find(sum - x) != hashtable.end())
        {
            int start = hashtable[sum - x] + 1;
            cout << "Subarray found "
                 << "\n";
            for (int j = start; j <= i; j++)
            {

                cout << arr[j] << " ";
            }
            cout << "\n";
        }
        hashtable.insert(make_pair(sum, i));
    }
    return 0;
}