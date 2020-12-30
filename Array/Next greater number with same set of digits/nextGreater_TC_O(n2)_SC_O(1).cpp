#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {2, 1, 8, 7, 6, 5};
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 4, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int arr[] = {9, 7, 6, 3, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    bool found = false;
    int i, j;
    int smallest = numeric_limits<int>::max();
    int smalles_index, index;
    for (i = len - 2; i >= 0; i--)
    {

        if (arr[i] < arr[i + 1])
        {
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Not Possible \n";
        return 0;
    }
    for (j = i; j < len; j++)
    {
        if (arr[j] > arr[i] && arr[j] < smallest)
        {
            smallest = arr[j];
            smalles_index = j;
        }
    }
    swap(arr[i], arr[smalles_index]);
    sort(arr + i + 1, arr + len); // or reverser can also be used
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}