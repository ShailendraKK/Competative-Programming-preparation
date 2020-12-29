#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 3, 5, 7, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for (int i = 1; i < len; i++)
    {
        int current = arr[i];
        for (j = i; j > 0 && arr[j - 1] > current; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = current;
    }
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}