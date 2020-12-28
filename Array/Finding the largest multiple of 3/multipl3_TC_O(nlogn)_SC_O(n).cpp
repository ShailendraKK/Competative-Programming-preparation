#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 3, 3, 8, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    sort(arr, arr + len);
    deque<int> zero_rem, one_rem, two_rem;
    int size = len;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
        if (arr[i] % 3 == 1)
            one_rem.push_back(arr[i]);
        else if (arr[i] % 3 == 2)
            two_rem.push_back(arr[i]);
        else
            zero_rem.push_back(arr[i]);
    }
    if (sum % 3 == 1)
    {
        if (!one_rem.empty())
        {
            one_rem.pop_front();
            size--;
        }
        else
        {
            if (!two_rem.empty())
            {
                two_rem.pop_front();
                size--;
            }
            else
            {
                cout << "Not possible";
                return 0;
            }

            if (!two_rem.empty())
            {
                two_rem.pop_front();
                size--;
            }
            else
            {
                cout << "Not possible";
                return 0;
            }
        }
    }
    else if (sum % 3 == 2)
    {
        if (!two_rem.empty())
        {
            two_rem.pop_front();
            size--;
        }
        else
        {
            if (!one_rem.empty())
            {
                one_rem.pop_front();
                size--;
            }
            else
            {
                cout << "Not possible";
                return 0;
            }
            if (!one_rem.empty())
            {
                one_rem.pop_front();
                size--;
            }
            else
            {
                cout << "Not possible";
                return 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            cout << arr[i];
        }
        cout << "\n";
        return 0;
    }
    int output[size];
    int index = 0;
    while (!zero_rem.empty())
    {
        output[index] = zero_rem.front();
        zero_rem.pop_front();
        index++;
    }
    while (!one_rem.empty())
    {
        output[index] = one_rem.front();
        one_rem.pop_front();
        index++;
    }
    while (!one_rem.empty())
    {
        output[index] = two_rem.front();
        two_rem.pop_front();
        index++;
    }
    sort(output, output + size, greater<int>());
    for (int i = 0; i < size; i++)
    {
        cout << output[i];
    }
    cout << "\n";

    return 0;
}