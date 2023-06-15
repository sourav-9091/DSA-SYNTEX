#include <iostream>
using namespace std;
void sort(int *arr, int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==1&&arr[j]==0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }else if(arr[i]==0){
            i++;
        }else if(arr[j]==1){
            j--;
        }
    }
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

        sort(arr, n);
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        t--;
    }
    return 0;
} 
