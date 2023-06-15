#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr=new int[n];
    int max=INT_MIN;
    for(int i=0;i<n;i++){
       cin >> arr[i];
       if(arr[i]>max){
        max=arr[i];
       }
    }
    cout << max << endl;
    return 0;
}
