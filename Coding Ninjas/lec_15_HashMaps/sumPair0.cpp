#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int pairSum(int *arr, int n) {
    unordered_map<int, int> frequency;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }

    for (int i = 0; i < n; ++i) {
        int complement = -arr[i];
        if (frequency.find(complement) != frequency.end()) {
            count += frequency[complement];
            // if (complement == arr[i]) {
            //     count--;
            // }
        }
    }

    count /= 2;

    return count;
}

int main() {
    int n;
    cin >> n;

    int* arr1 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    } 

    cout << pairSum(arr1, n) << endl;
    delete[] arr1;
}