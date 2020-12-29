#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 3, 1, 1, 2, 2, 4};
    // int arr[] = {1, 1, 2, 3, 4, 3};
    // int arr[] = {2, 4, 2, 5, 4, 3, 1};
    // int arr[] = {1, 3, 1, 2, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        if (arr[abs(arr[i])] >= 0)
        {
            arr[abs(arr[i])] = -1 * arr[abs(arr[i])];
        }
        else
        {
            cout << abs(arr[i]) << " ";
        }
    }
    cout << "\n";
    return 0;
}