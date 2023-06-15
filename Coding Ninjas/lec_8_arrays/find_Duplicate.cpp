#include <iostream>
using namespace std;
int findDuplicate(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    return 0;
}
int main(){
    int t=0;
    cout << "Enter the number of test case: ";
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

        int output=findDuplicate(arr, n);
        cout << output << endl;
        t--;
    }
    return 0;
} 
