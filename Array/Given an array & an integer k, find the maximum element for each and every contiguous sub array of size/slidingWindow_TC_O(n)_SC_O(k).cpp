#include <list>
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int arr[] = {10, 4, 2, 11, 3, 15, 12, 8, 7, 9, 21, 14};
    int len = sizeof(arr) / sizeof(arr[0]);
    deque<int> sliding_window;
    int k = 3;
    sliding_window.push_front(0);
    for (int i = 0; i < k; i++)
    {
        while (!sliding_window.empty() && arr[i] >= arr[sliding_window.back()])
        {
            sliding_window.pop_back();
        }
        sliding_window.push_back(i);
    }
    for (int i = k; i < len; i++)
    {
        cout << arr[sliding_window.front()] << " ";
        if (sliding_window.front() == i - k)
        {
            sliding_window.pop_front();
        }
        while (!sliding_window.empty() && arr[i] >= arr[sliding_window.back()])
        {
            sliding_window.pop_back();
        }
        sliding_window.push_back(i);
    }
    cout << arr[sliding_window.front()] << "\n";
    return 0;
}
