#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    reverse(arr, arr + d);
    reverse(arr + d, arr + len);
    reverse(arr, arr + len);
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}