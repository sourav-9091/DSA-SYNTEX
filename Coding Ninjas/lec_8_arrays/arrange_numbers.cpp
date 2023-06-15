#include <iostream>
using namespace std;
void arrangeNum(int *arr, int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i-j]=i+1;
        }else{
            arr[n-i+j]=i+1;
            j++;
        }
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
        arrangeNum(arr, n);
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}
