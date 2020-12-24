#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 2, 10, 6, 9, 1};
    // int arr[] = {0, 3, 44, 5, 9, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num, left, right;
    int x = 13;
    int found = 0;
    sort(arr, arr + len);
    for (int i = 0; i < len - 2; i++)
    {
        num = arr[i];
        left = i + 1;
        right = len - 1;
        while (left < right)
        {
            int sum = num + arr[left] + arr[right];
            if (sum == x)
            {
                found = 1;
                cout << num << " " << arr[left] << " " << arr[right] << "\n";
                break;
            }
            else if (sum < x)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        if (found == 1)
        {
            break;
        }
    }
    return 0;
}