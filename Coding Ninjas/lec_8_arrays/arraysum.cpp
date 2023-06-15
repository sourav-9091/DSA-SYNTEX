#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr=new int [n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum=sum+arr[i];
    }
    cout << sum << endl;
    return 0;
}
