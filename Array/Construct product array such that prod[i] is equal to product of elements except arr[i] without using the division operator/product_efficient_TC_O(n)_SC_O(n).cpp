#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40};
    // int arr[] = {10, 3, 5, 6, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int product_temp = 1;
    int prod[len];
    for (int i = 0; i < len; i++)
    {
        prod[i] = product_temp;
        product_temp *= arr[i];
    }
    product_temp = 1;
    for (int i = len - 1; i >= 0; i--)
    {
        prod[i] *= product_temp;
        product_temp *= arr[i];
    }
    for (int i = 0; i < len; i++)
    {
        cout << prod[i] << " ";
    }
    cout << "\n";

    return 0;
}