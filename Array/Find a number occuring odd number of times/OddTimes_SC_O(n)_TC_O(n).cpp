#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 2, 1, 2, 2, 1, 1};
    map<int, int> odd_count;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        if (odd_count.find(arr[i]) == odd_count.end())
        {
            odd_count.insert(make_pair(arr[i], 1));
        }
        else
        {
            odd_count[arr[i]] = odd_count[arr[i]] + 1;
        }
    }
    for (map<int, int>::iterator it = odd_count.begin(); it != odd_count.end(); ++it)
    {
        if (it->second % 2 == 1)
        {
            cout << it->first << "\n";
        }
    }
    return 0;
}