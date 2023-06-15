#include <iostream>
using namespace std;
int main(){
    int a[100][100];

    int n=0;
    cout << "Enter the number of rows: ";
    cin >> n;

    int m=0;
    cout << "Enter the number of columns: ";
    cin >> m;

    cout << "Enter the array elements: " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum = sum + a[j][i];
        }
        cout << sum << " ";
    }

    return 0;
}
