#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 5, 15, 3, 4, 21, 2};
    // int arr[] = {7, 2, 1, 4, 6, 4, 0};
    // int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int left_sum = 0;
    int right_sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum = sum + arr[i];
    }
    right_sum = sum;
    for (int i = 0; i < len; i++)
    {
        right_sum = right_sum - arr[i];
        if (left_sum == right_sum)
        {
            cout << i << " ";
        }
        left_sum = left_sum + arr[i];
    }
    return 0;
}