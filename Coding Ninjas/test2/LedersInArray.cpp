#include <iostream>
using namespace std;
/*void Leaders(int *arr, int n){
    for(int i=0;i<n;i++){
    bool test=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                test=true;
            }
        }
        if(test==false){
            cout << arr[i] << " ";
        }
    }
}*/
void Leaders(int* arr,int len) {
    int j=0;
    int *save = new int[len];
    int largest=INT_MIN;
    //largest contains the maximum value of leading array. 
    for(int i=len-1;i>=0;i--) {
        if(arr[i]>=largest){
            // if element at current index is greater than largest then put it in array and make ot largest;
            save[j]=arr[i];
            j++;
            largest=arr[i];
        }
    }
    for(int i=j-1;i>=0;i--) {
        // Print the array in reverse order... 
        cout<<save[i] << " "; 
    }
}
int main(){
    int n=0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the array elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    Leaders(arr,n);
    return 0;
}
