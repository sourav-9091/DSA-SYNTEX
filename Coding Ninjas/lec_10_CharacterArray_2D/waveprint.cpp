#include <iostream>
using namespace std;
void printsinWave(int ** arr, int n, int m){
    //j will go from 0th col to mth col
    for(int j=0;j<m;j++){
        //i will go from 0 to n-1 for one iteration
        //then i will go from n-1 to 0
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout << arr[i][j] << " ";
            }
        }else {
            for(int i=n-1;i>=0;i--){
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main(){
    int t=0;
    cout << "Enter the number of test cases to run: ";
    cin >> t;

    while(t){
        int n=0;
        cout << "Enter the number of rows: ";
        cin >> n;

        int m=0;
        cout << "Enter the nubmer of cols: ";
        cin >> m;

        int ** arr= new int*[n];

        cout << "Enter the array elements" << endl;
        for(int i=0;i<n;i++){
            arr[i]=new int[m];
            for(int j=0;j<m;j++){
                cin >> arr[i][j];
            }
        }
        printsinWave(arr, n, m);

        for(int i=0;i<n;i++){
            delete [] arr[i];
        }
        delete [] arr;
        t--;
    }
    return 0;
}
