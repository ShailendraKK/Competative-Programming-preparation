#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 0, 2, 0, 1, 0, 3, 1, 0, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int left_max[len], right_max[len];
    int left_max_num = arr[0];
    int right_max_num = arr[len - 1];
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > left_max_num)
        {
            left_max_num = arr[i];
        }

        left_max[i] = left_max_num;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (arr[i] > right_max_num)
        {
            right_max_num = arr[i];
        }
        right_max[i] = right_max_num;
    }
    for (int i = 0; i < len; i++)
    {
        sum += (min(left_max[i], right_max[i]) - arr[i]);
    }
    cout << sum << "\n";
    return 0;
}