#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << n-j+1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
