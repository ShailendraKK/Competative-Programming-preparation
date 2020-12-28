#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40};
    int len = sizeof(arr) / sizeof(arr[0]);
    int left_prod[len], right_prod[len];
    int product_till_now = 1;
    int prod[len];
    for (int i = 0; i < len; i++)
    {
        product_till_now *= arr[i];
        left_prod[i] = product_till_now;
    }
    product_till_now = 1;
    for (int i = len - 1; i >= 0; i--)
    {
        product_till_now *= arr[i];
        right_prod[i] = product_till_now;
    }
    prod[0] = right_prod[1];
    prod[len - 1] = left_prod[len - 2];
    for (int i = 1; i < len - 1; i++)
    {
        prod[i] = left_prod[i - 1] * right_prod[i + 1];
    }
    for (int i = 0; i < len; i++)
    {
        cout << prod[i] << " ";
    }
    cout << "\n";

    return 0;
}