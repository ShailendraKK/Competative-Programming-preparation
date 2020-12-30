#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 13, 2, 3, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + len);
    int sum = 1;
    for (int i = 0; i < len; i++)
    {
        if (sum < arr[i])
        {

            break;
        }
        else
        {
            sum += arr[i];
        }
    }
    cout << sum << '\n';
    return 0;
}