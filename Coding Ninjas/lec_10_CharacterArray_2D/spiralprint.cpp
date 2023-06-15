#include <iostream>
using namespace std;
void Spiral(int ** arr, int n, int m){
    int scol=0;
    int srow=0;
    int erow=n-1;
    int ecol=m-1;

    while(srow<=ecol){
        for(int i=scol;i<=ecol;i++){
            cout << arr[srow][i] << " ";
        }
        srow++;

        for(int i=srow;i<=erow;i++){
            cout << arr[i][ecol] << " ";
        }
        ecol--;
 
        if(srow==ecol || scol==erow){
            break;
        }
        for(int i=ecol;i>=scol;i--){
            cout << arr[erow][i] << " ";
        }
        erow--;

        for(int i=erow;i>=srow;i--){
            cout << arr[i][scol] << " ";
        }
        scol++;

        /*cout << endl;
        cout <<  " srow: " << srow << " ";
        cout <<  " scol: " << scol << " ";
        cout <<  " erow: " << erow << " ";
        cout <<  " ecol: " << ecol << " " << endl;*/
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
        Spiral(arr, n, m);

        for(int i=0;i<n;i++){
            delete [] arr[i];
        }
        delete [] arr;
        t--;
    }
    return 0;
}
