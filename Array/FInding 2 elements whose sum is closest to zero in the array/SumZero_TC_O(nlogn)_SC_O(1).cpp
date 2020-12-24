#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2, 9, 6, 1, 2, -5}; // -5 -2 1 2 6 9
    // int arr[] = {-79, -9, 0, 59, 69, 84};
    int len = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = len - 1;
    int curr_sum;
    int closest_sum = numeric_limits<int>::max();
    int min_index = 0;
    int max_index = 0;
    sort(arr, arr + len);
    while (left < right)
    {

        curr_sum = arr[left] + arr[right];
        if (abs(curr_sum) < abs(closest_sum))
        {
            closest_sum = curr_sum;
            min_index = left;
            max_index = right;
        }
        if (curr_sum > 0)
        {
            right--;
        }
        else if (curr_sum == 0)
        {
            closest_sum = curr_sum;
            min_index = left;
            max_index = right;
            break;
        }
        else
        {
            left++;
        }
    }
    cout << closest_sum << " " << arr[min_index] << " " << arr[max_index] << "\n";
    return 0;
}