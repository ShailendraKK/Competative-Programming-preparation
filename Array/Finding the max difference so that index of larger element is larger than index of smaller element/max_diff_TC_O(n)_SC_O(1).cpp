#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 3, 10, 2, 9, 1, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int diff[len];
    int max_diff = arr[1] - arr[0];
    int min_element = arr[0];
    int max_element = arr[1];
    int current_diff = arr[1] - arr[0];
    int min_so_far = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < min_so_far)
        {
            min_so_far = arr[i];
        }
        else
        {
            current_diff = arr[i] - min_so_far;
            if (current_diff > max_diff)
            {
                max_diff = current_diff;
                max_element = arr[i];
                min_element = min_so_far;
            }
        }
    }
    cout << "max_diif : " << max_diff << " min_ele : " << min_element << " max_ele: " << max_element << "\n";
    return 0;
}