#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i += 2)
    {

        if (i > 0 && arr[i] < arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (i < len - 1 && arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}