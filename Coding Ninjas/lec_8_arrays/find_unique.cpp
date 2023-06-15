#include <iostream>
using namespace std;
int findUnique(int *arr, int n){
    for(int i=0;i<n;i++){
        bool t=true;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                t=false;
                break;
            }
        }
        if(t==true){
            return arr[i];
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
        cout << "Enter the elements of array: ";
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        int output=findUnique(arr, n);
        cout << output << endl;
        t--;
    }
    return 0;
}
