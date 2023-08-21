#include <iostream>
#include <unordered_map>
using namespace std;

int highestFrequency(int arr[], int n)
{
    unordered_map<int, int> maxFrequency;

    for (int i = 0; i < n; i++)
    {
        maxFrequency[arr[i]] += 1;
    }

    int max = 0, value = 0;

    for (int i = 0; i < n; i++)
    {
        if (maxFrequency[arr[i]] > max)
        {
            max = maxFrequency[arr[i]];
            value = arr[i];
        }
    }

    return value;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}