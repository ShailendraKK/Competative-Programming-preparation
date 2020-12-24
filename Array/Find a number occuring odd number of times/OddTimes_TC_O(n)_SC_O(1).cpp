#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 2, 1, 3, 3, 1, 2};
    map<int, int> odd_count;
    int len = sizeof(arr) / sizeof(arr[0]);
    int xorresult = arr[0];
    for (int i = 1; i < len; i++)
    {
        xorresult = xorresult xor arr[i];
    }
    cout << xorresult << "\n";

    return 0;
}