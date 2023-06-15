#include <iostream>
using namespace std;
int pairsum(int *arr, int n, int x){
    int pairs=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    cout << i << " " << j << " " << k << endl;
                    pairs++;
                }
            }
        }
    }
    return pairs;
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

        int x=0;
        cout << "Enter the value the elements of the array should sum: ";
        cin >> x;
        
        int output=pairsum(arr, n, x);
        cout << output << endl;
        t--;
    }
    return 0;
} 
