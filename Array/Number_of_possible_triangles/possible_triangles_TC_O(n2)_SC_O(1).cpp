#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[] = {4, 1, 3, 2}; // 1 2 3 4
    int arr[] = {6, 7, 8, 10, 12, 14, 50};
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + len);
    int sum = 0;
    int k = 0;
    int j = 0;
    for (int i = 0; i < len - 2; i++)
    {
        k = i + 2;
        for (j = i + 1; j < len - 1; j++)
        {
            while (k < len && arr[i] + arr[j] > arr[k])
            {
                k++;
            }
            sum = sum + k - j - 1;
        }
    }
    cout << sum << "\n";
    return 0;
}