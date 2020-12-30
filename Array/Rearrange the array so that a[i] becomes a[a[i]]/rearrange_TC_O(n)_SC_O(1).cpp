#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 1, 0, 2, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        arr[i] = arr[i] + ((arr[arr[i]] % len) * len);
    }
    for (int i = 0; i < len; i++)
    {
        arr[i] = arr[i] / len;
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}