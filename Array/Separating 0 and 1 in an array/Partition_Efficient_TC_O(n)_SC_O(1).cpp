#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 1, 0};
    int left = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    int right = len - 1;
    while (left < right)
    {
        if (arr[left] == 1 && arr[right] == 0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}