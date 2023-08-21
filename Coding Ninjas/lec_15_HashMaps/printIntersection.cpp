// You have been given two integer arrays/lists (ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m) {
    unordered_map<int, int> hashMap;

    // Count occurrences of elements in the first array
    for (int i = 0; i < n; i++) {
        hashMap[arr1[i]]++;
    }

    // Print common elements and decrement their count in hashMap
    for (int i = 0; i < m; i++) {
        if (hashMap.find(arr2[i]) != hashMap.end() && hashMap[arr2[i]] > 0) {
            cout << arr2[i] << endl;
            hashMap[arr2[i]]--;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int* arr1 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int* arr2 = new int[m];

    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, m);

    delete[] arr1;
    delete[] arr2;
}