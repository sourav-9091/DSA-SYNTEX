#include <iostream>
using namespace std;


int binarySearch(int input[], int l, int r, int element)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (input[mid] == element)
            return mid;
        else if (input[mid] > element)
            return binarySearch(input, l, mid - 1, element);
        else
            return binarySearch(input, mid + 1, r, element);
    }
    return -1;
}
int binarySearch(int input[], int size, int element)
{
    // Write your code here
    binarySearch(input, 0, size - 1, element);
}


int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}

