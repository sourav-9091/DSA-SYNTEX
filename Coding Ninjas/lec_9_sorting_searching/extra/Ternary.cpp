#include <iostream>
using namespace std;
int Ternary(int* arr, int n, int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid1=start+(end-start)/3;
        int mid2=end-(end-start)/3;
        if(arr[mid1]==x){
            return mid1;
        }else if(x<arr[mid1]){
            end=mid1-1;
        }else if(arr[mid2]==x){
            return mid2;
        }else if(x<arr[mid2]){
            start=mid1+1;
            end=mid2-1;
        }else{
            start=mid2+1;
        }
    }
    return -1;
}
int main(){
    int n=0;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr=new int[n];
    cout << "Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int t=0;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while(t){
        int x=0;
        cout << "Enter the element to find: ";
        cin >> x;

        int output=Ternary(arr,n,x);
        cout << output << endl;
        t--;
    }
    return 0;
}
