#include <iostream>
using namespace std;
void swapAlternate(int *arr, int n){
    for(int i=0;i<n-1;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
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
        cout << "Enter the element of array: ";
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        swapAlternate(arr,n);
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}
