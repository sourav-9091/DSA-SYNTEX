#include <iostream>
#include <climits>
using namespace std;
void Intersection(int* arr, int* arr1, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==arr1[j]){
                cout << arr[i] << " ";
                arr1[j]=INT_MIN;
                break;
            }
        }
    }
    cout << endl;
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

        int m=0;
        cout << "Enter the size of second array: ";
        cin >> m;

        int *arr1=new int[m];
        cout << "Enter the elements of array2: ";
        for(int i=0;i<m;i++){
            cin >> arr1[i];
        }

        Intersection(arr, arr1, n, m);
        t--;
    }
    return 0;
} 
