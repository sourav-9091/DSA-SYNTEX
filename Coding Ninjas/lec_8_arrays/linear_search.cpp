#include <iostream>
using namespace std;
int search(int arr[], int x, int n){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int t=0;
    cout << "Enter the number of test case : ";
    cin >> t;

    while(t!=0){
        int n=0;
        cout << "Enter the size of array: ";
        cin >> n;

        int *arr=new int[n];
        cout << "Enter the elements of array: ";
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        int x=0;
        cout << "Enter the array element to find ";
        cin >> x;

        int o=search(arr, x, n);
        cout << o << endl;
        t--;
    }
    return 0;
}
